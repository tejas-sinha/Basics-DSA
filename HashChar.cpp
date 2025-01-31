// Printing how many times character is occured in string using hash method.

#include <iostream>
using namespace std;

int main() {
    char arr[256] = {'a','b','A','g','a','G','e','A','R'};

    int hash[256] = {0};
    for (sigset_t i = 0; i < sizeof(arr); i++){
        hash[arr[i]]++;
    }

    char c;
    cout << "Enter a Character : ";
    cin >> c;

    cout << hash[c] << endl;

    return 0;
}
