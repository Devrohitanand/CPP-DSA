#include <iostream>
using namespace std;
int main (){
    int number;
    cout << "Enter the number: ";
    cin >> number;

    if (number % 2 == 0) {
        cout << "Entered number " << number << " is EVEN" <<endl;
    }
    else {
        cout << "Entered number " << number << " is ODD" <<endl;
    }
    return 0;
}