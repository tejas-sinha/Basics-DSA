// Printing number from 1 to n using backtracking.

#include <iostream>
using namespace std;

void Backtracking(int i, int n) {
    if (i < 1) return;

    Backtracking(i-1, n);
    cout << i << endl;
}

int main() {
    int n;
    cout << "Enter a number : ";
    cin >> n;

    Backtracking(n, n);    

    return 0;
}
