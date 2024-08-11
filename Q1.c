#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int arr[SIZE];
int count = 0;
void display() {
    printf("Array elements: ");
    for (int i = 0; i < count; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void insertFirst() {
    if (count == SIZE) {
        printf("Array is full, can't insert the element\n");
        return;
    }
    // Shift elements to the right to make space for the new element
    for (int i = count; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    int n;
    printf("Enter the element to insert at the beginning: ");
    scanf("%d", &n);
    arr[0] = n;
    count++;

    printf("Insertion at the first position is done\n");
    display();
}
void insertLast() {
    if (count == SIZE) {
        printf("Array is full, can't insert the element\n");
        return;
    }
    int n;
    printf("Enter the element to insert at the end: ");
    scanf("%d", &n);
    arr[count] = n;
    count++;
    printf("Insertion at the last position is done\n");
    display();
}
int main() {
    int ch;
    do {
        if (count == 0) {
            printf("Array is empty\n");
        }
        printf("Choose the operation you want to perform\n");
        printf("1. Insert at the first position\n");
        printf("2. Insert at the last position\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                insertFirst();
                break;
            case 2:
                insertLast();
                break;
            default:
                printf("Invalid choice\n");
        }
        if (count < SIZE) {
            printf("Do you want to perform any other operation?\n");
            printf("1. Yes\n");
            printf("2. Exit\n");
            scanf("%d", &ch);
        } else {
            printf("Array is full. No more operations allowed.\n");
            ch = 2; // Exit
        }
    } while (ch == 1);
    return 0;
}
