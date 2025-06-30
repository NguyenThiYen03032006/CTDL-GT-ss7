#include <stdio.h>

int main(void) {
    int rows, cols;
    scanf("%d %d", &rows, &cols);
    if (rows<=0 || cols<=0 ||rows>=1000 || cols>=1000) {
        printf("So luong hang hoac cot khong hop le");
        return 0;
    }
    int arr[rows][cols];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    int col;
    printf("Chon cot: ");
    scanf("%d", &col);
    if (col<0 || col>=cols) {
        printf("Cot chon khong hop le");
        return 0;
    }
    for (int i = 0; i < rows; i++) {
        int temp=arr[i][col];
        int j=i-1;
        while (j>=0 && arr[j][col]>temp) {
            arr[j+1][col]=arr[j][col];
            j--;
        }
        arr[j+1][col]=temp;
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}