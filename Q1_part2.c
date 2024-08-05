#include <stdio.h>
// void InsertEmpty(int *arr, int num){
//     arr[0] = num;
// }
void InsertFirst(int *arr, int num){
    for(int i=10; i>0; i--){
        arr[i] = arr[i-1];
    }
    arr[0] = num;
}
void InsertLast(int *arr, int num){
    for(int i=0; i<10; i++){
       if(arr[i] == 0){
           arr[i] = num;
           break;
       }
    }
}

int main() {
    int arr[10] = {11,12,13,14,15};
    //InsertEmpty(arr, 1);
    InsertFirst(arr, 10);
    for(int i=0; i<10; i++){
       printf("%d ", arr[i]);
    }
    printf("\n");
    InsertLast(arr, 50);
    for(int i=0; i<10; i++){
       printf("%d ", arr[i]);
    }

    return 0;
}
