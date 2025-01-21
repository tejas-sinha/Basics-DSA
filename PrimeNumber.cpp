// Checking if the given number is prime number or not.

#include <iostream>
using namespace std;

bool Prime(int num){
    int count = 0;

    for (int i = 1; i*i <= num; i++) {
        if (num % i == 0) {
            count++;
            if (num/i != i) count++;
        }
    }
    if (count == 2) return true;
    else return false;
}

int main() {
    int num;
    cout << "Enter a number : ";
    cin >> num;

    bool isPrime = Prime(num);

    if (isPrime == true) cout << "The number " << num << " is prime number.";
    else cout << "The number " << num << " is not a prime number.";

    return 0;
}
