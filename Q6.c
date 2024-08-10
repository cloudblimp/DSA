#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    sort(arr, arr+n);
    int largest, secondLargest;
    largest = arr[n-1];
    secondLargest = arr[n-2];
    cout <<"Largest element in array: " << largest << endl;
    cout <<"Second largest element in array: " << secondLargest << endl;
    return 0;
}
