#include <stdio.h>


int main(void) {
    int n;
    scanf("%d", &n);
    if (n<=0||n>=1000) {
        printf("So luong phan tu khong hop le ");
        return 0;
    }
    int arr[n];
    for (int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Befor:");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    for (int i = 0; i < n-1; i++) {
        for (int j=0; j<n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }

        }
    }
    printf("\nAfter:");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}