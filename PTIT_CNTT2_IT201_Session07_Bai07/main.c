#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    if (n<=0 || n>=1000) {
        printf("So luong phan tu khong hop le");
        return 0;
    }
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Before: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    int left=0, mid=0, right=n-1;
    while (mid<=right) {
        if (arr[mid]<0) {
            int temp=arr[left];
            arr[left++]=arr[mid];
            arr[mid++]=temp;
        }else if (arr[mid]==0) {
            mid++;
        }else {
            int temp=arr[mid];
            arr[mid]=arr[right];
            arr[right--]=temp;
        }
    }

    printf("\nAfter: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}