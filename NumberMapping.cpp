// Printing how many times number is occured in array using map method.

#include <iostream>
#include <map>
using namespace std;

int mapping(int arr[], int sz, int n){
    map<int, int> mpp;
    for (int i = 0; i < sz; i++){
        mpp[arr[i]]++;
    }
    return mpp[n];
}

int main(){
    int sz = 5;
    int arr[] = {5,6,5,3,1};

    int q;
    while (true) {
        cout << "Enter a number : ";
        cin >> q;
        if (q == -1) {
            break;
        }
        cout << "Feequency is : " << mapping(arr,sz,q) << endl;
    }

    return 0;
}
