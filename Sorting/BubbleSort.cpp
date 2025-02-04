// Sorting array using Bubble Sorting method.

#include <iostream>
using namespace std;

void bubble(int arr[], int n){
    for (int i = n-1; i >= 0; i--){
        int didswap = 0;
        for (int j = 0; j < i; j++){
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp; 
                didswap++;
            }
        }
        if (didswap == 0) break;
    }
}

int main() {
    int n;
    cout << "Enter a number : ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter a number for array : ";
        cin >> arr[i];
    }

    bubble(arr, n);
    for (int i = 0; i < n; i++) cout << arr[i] << " ";

    return 0;
}