#include<iostream>
using namespace std;
int main(){
    int number;
    cout << "Enter num: ";
    cin >> number;

    for (int i = 0; i <number; i++) {
        for (int j = 0 ; j <= i; j++) {
            
            cout << (j + 2)/2 << " ";
        }
        cout << endl;
    
    }

    return 0;
}