#include <bits/stdc++.h>
using namespace std;
 
// Function to find repeating elements
void printDuplicates(int arr[], int n)
{
    int i, flag=0;
    for (i = 0; i < n; i++) {
        if (arr[arr[i] % n] >= n) {
            if (arr[arr[i] % n] < 2 * n) {
                cout << arr[i] % n << " ";
                flag = 1;
            }
        }
        arr[arr[i] % n] += n;
    }
    if (!flag)
        cout << "-1";
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    printDuplicates(arr, n);
    return 0;
}
