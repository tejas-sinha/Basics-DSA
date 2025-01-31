// Printing frequency of number in string using hash method.

#include <iostream>
using namespace std;

int main() {
    int n = 9;
    int arr[10] = {5,9,5,3,4,8,2,5,9};

    int hash[10] = {0};
    for (int i = 0; i < n; i++){
        hash[arr[i]] += 1;
    }

    int num;
    cout << "Enter a number : ";
    cin >> num;

    cout << hash[num] << endl;

    return 0;
}
