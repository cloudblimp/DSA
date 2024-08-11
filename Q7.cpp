#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[], int size)
{
    int reversedArr[size];
    for (int i = 0; i < size; i++) {
        reversedArr[i] = arr[size - i - 1];
    }
    cout << "Reversed Array: ";
    for (int i = 0; i < size; i++) {
        cout << reversedArr[i] << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    reverse(arr, n);
}
