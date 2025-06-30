#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n;
    scanf("%d", &n);
    if (n<=0) {
        printf("So luong mang khong hop le");
        return 0;
    }
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int x;
    printf("Nhap so nguyen X: ");
    scanf("%d", &x);
    int a1[n];
    for (int i = 0; i < n; i++) {
        a1[i] = abs(x-arr[i]);
    }
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (a1[j]>a1[j+1]) {
                int temp1=a1[j];
                a1[j]=a1[j+1];
                a1[j+1]=temp1;

                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}