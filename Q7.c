#include<stdio.h>
void reverse(int arr[], int size)
{
    int reversedArr[size];
    for (int i = 0; i < size; i++) {
        reversedArr[i] = arr[size - i - 1];
    }
    printf("Reversed Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", reversedArr[i]);
    }
}

int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    reverse(arr, n);
}
