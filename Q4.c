#include<stdio.h>
void printDuplicates(int arr[], int n) {
    int i, flag = 0;
    // Traverse the array
    for (i = 0; i < n; i++) {
        // Compute the index based on the current element's value
        int index = arr[i] % n;
        // Check if the value at this index has been incremented before
        if (arr[index] >= n) {
            // This index has been visited, hence the element is a duplicate
            if (arr[index] < 2 * n) {
                printf("%d ", index);
                flag = 1;
            }
        }
        // Increment the value at this index by n to mark its visit
        arr[index] += n;
    }
    // If no duplicates were found, print -1
    if (!flag) {
        printf("-1");
    }
}
int main()
{
    int n;
    printf("Enter size of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("The initial array: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Duplicates in array is/are: ");
    printDuplicates(arr, n);
    return 0;
}
