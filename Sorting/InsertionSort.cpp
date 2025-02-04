// Sorting array using Insertion Sorting method.

#include <iostream>
using namespace std;

void insertion(int arr[], int n) {
    for (int i = 1; i <= n-1; i++){
        for (int j = i; j > 0 && arr[j-1] > arr[j]; j--){
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
        }
    }
}

int main() {
    int n;
    cout << "Enter a number : ";
    cin >> n;

    int arr[n];
    cout << "Enter numbers for array : ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    insertion(arr, n);
    for (int i = 0; i < n; i++) cout << arr[i] << " ";

    return 0;
}