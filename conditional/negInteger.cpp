#include <iostream>
using namespace std;
int main (){
    int number;
    cout << "Enter the number: ";
    cin >> number;
    if (number >= 0) {
        cout << "Entered number "<< number << " is integer " <<endl;
    }
    else {
        cout << "Entered number "<< number << " negative integer " <<endl;
    }
    return 0;
}