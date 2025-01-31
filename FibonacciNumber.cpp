// Printing Fibonacci Number.

#include <iostream>
using namespace std;

int FibonacciNumber(int n){
    if (n <= 1) return n;

    return FibonacciNumber(n - 1) + FibonacciNumber(n - 2);
}

int main() {
    int n;
    cout << "Enter a number : ";
    cin >> n;

    cout << FibonacciNumber(n);

    return 0;
}
