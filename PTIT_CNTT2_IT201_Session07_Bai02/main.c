#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    if (n<=0 || n>=1000) {
        printf("So luong phan tu khong hop le ");
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
    printf("\nAfter: ");
    for ( int i=0; i<n-1; i++) {
        int index=i;
        for (int j=i+1; j<n; j++) {
            if (arr[j]<arr[index]) {
                index=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[index];
        arr[index]=temp;
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}