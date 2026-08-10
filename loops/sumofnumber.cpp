#include <iostream>
using namespace std;
int main (){
    int number, sum = 0;
    cout << "Enter the number: ";
    cin >> number;

    for (int i = 1; i <= number; i++) {
        
        sum += i;
    }
    cout << "sum: " << sum << endl;
    return 0;
}