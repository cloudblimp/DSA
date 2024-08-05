//Write a program to find the minimum and maximum elements in an array.
#include<stdio.h>
int main(){
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    if(size <= 0){
        printf("Array size must be positive.");
        return 1;
    }
    
    int arr[size];
    printf("Enter %d elements: ", size);
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    
    int min = arr[0];
    int max = arr[0];
    
    for(int i=1; i<size; i++){
        if (arr[i] < min){
            min = arr[i];
        }
            
        if (arr[i] > max){
             max = arr[i];
        }
           
    }
    
    printf("Minimum element = %d\n", min);
    printf("Maximum element = %d\n", max);
    
    return 0;
}
