#include <stdio.h>
void InsertEmpty(int *arr, int first, int last){
    arr[0] = first;
    arr[1] = last;
    printf("%d %d", first, last);
}
int main() {
    
    int arr[]={0};
    InsertEmpty(arr, 12, 155);
    return 0;
}
