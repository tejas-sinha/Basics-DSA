// Printing factorial of n number.

#include <iostream>
using namespace std;

int Factorial(int n){
    if (n == 0) return 1;

    return n * Factorial(n-1);

}

int main() {
    int n;
    cout << "Enter a number : ";
    cin >> n;

    cout << Factorial(n);

    return 0;
}
