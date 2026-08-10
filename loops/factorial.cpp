#include <iostream>
using namespace std;
int main (){
    int number, product = 1;
    cout << "Enter the number: ";
    cin >> number;

    for (int i = 1; i <= number; i++) {
        
        product *= i;
    }
    cout << "Factorial: " << product << endl;
    return 0;
}