#include <stdio.h>
int pivot(int arr[], int left, int right) {
    int pivot=arr[right];
    int i=left-1;
    for (int j=left; j<=right-1; j++) {
        if (arr[j] <= pivot) {
            i++;
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    int temp=arr[i+1];
    arr[i+1]=arr[right];
    arr[right]=temp;
    return i+1;
}
void quickSort(int arr[], int left, int right) {
    if (left<right) {
        int p=pivot(arr, left, right);
        quickSort(arr, left, p-1);
        quickSort(arr, p+1, right);
    }
}
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
    quickSort(arr,0,n-1);
    printf("\nAfter: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}