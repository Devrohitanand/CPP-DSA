#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: "<< endl;
    cin>>n;

    if (n>0 && (n & ( n - 1 )) == 0) {
        cout << "Power of 2 " <<endl;
    }
    else {
        cout << "Not a Power of 2 " << endl;
    }
    return 0;
}

