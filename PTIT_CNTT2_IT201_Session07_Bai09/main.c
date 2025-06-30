#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    if (n<=0 || n>=1000) {
        printf("So luong phan tu khong hop le");
        return 0;
    }
    int arr[n];
    int c=0,l=0;
    int arrC[n], arrL[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i]%2==0) {
            arrC[c] = arr[i];
            c++;
        }else {
            arrL[l] = arr[i];
            l++;
        }
    }


    for (int i = 0; i < c-1; i++) {
        for (int j=0; j<c-1-i; j++) {
            if (arrC[j]>arrC[j+1]) {
                int temp = arrC[j];
                arrC[j] = arrC[j+1];
                arrC[j+1] = temp;
            }
        }
    }
    for (int i = 0; i < l-1; i++) {
        for (int j=0; j<l-1-i; j++) {
            if (arrL[j]<arrL[j+1]) {
                int temp = arrL[j];
                arrL[j] = arrL[j+1];
                arrL[j+1] = temp;

            }
        }
    }
    for (int i=0; i<c;i++) {
        arr[i] = arrC[i];
    }
    for (int i = c; i < n; i++) {
        arr[i] = arrL[i-c];
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}