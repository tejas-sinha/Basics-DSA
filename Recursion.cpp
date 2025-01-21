// Printing numbers from 1 to n using function.

#include <iostream>
using namespace std;


void Printing(int i, int n) {
    if (i > n) return;

    cout << i << endl;
    Printing(i+1, n);
}

int main() {
    int n;
    cout << "Enter a number : ";
    cin >> n;

    Printing(1, n);    

    return 0;
}
