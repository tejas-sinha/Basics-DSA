// Sorting array using Selection Sorting method.

#include <iostream>
using namespace std;

void select(int arr[], int n){
    for (int i = 0; i <= n-2; i++){
        int min = i;
        for (int j = i; j <= n-1; j++){
            if (arr[j] < arr[min]) min = j;
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
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

    select(arr, n);
    for (int i = 0; i < n; i++) cout << arr[i] << " ";

    return 0;
}