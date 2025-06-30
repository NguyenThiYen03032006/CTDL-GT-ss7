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
    for ( int i=1; i<n; i++) {
        int key = arr[i];
        int j=i-1;
        while (j>=0 && arr[j]>key) {
            arr[j+1] = arr[j];
            j=j-1;
        }
        arr[j+1] = key;
    }
    printf("\nAfter: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}