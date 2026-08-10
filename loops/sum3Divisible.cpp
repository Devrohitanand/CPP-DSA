#include <iostream>
using namespace std;
int main(){
    int number,sum = 0;
    cout << "Enter number: ";
    cin >> number;

    for (int i = 1; i <= number; i++) {
        if (i % 3 ==0) {
            sum += i;
        }
    
    }
    cout << sum << endl;
    return 0;
}
