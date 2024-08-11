#include <stdio.h>
void deleteFirst(int* arr, int& size) {
    if (size <= 0) {
        printf("No elements to delete\n");
        return;
    }
    // Shift elements to the left
    for (int i = 1; i < size; i++) {
        arr[i - 1] = arr[i];
    }
    size--;  //Reduce size since we deleted one element
    //Print the modified array
    printf("Array after deleting first element: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void deleteLast(int* arr, int& size) {
    if (size <= 0) {
        printf("No elements to delete\n");
        return;
    }
    size--;  //Reduce size since we deleted one element
    //Print the modified array
    printf("Array after deleting last element: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int arr[]={};   //empty array
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("When initial array is Empty: \n");
    deleteFirst(arr, size);
    deleteLast(arr, size);
    int arr1[5] = {1, 2, 3, 4, 5}; //array with 5 elements
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    // Print the initial array
    printf("When initial array has already 5 elements: ");
    for (int i = 0; i < size1; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");
    deleteFirst(arr1, size1);
    deleteLast(arr1, size1);
    return 0;
}
