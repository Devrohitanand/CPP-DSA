#include <iostream>
using namespace std;
int main(){
    int alphabetCount;
    cout << "Enter Alphabet count: ";
    cin >> alphabetCount ;
    
    for (int i = 0; i <= alphabetCount - 1; i++) {
    
        char ch = 'A';  // if you want to print all the ascii value just type cast ch with int.
        for (int j = 0; j <= alphabetCount -1; j++) {
            
            cout << ch << " ";
            ch += 1;  // ascii of A = 65 increace with +1
        }
        cout << endl;
        
    }
    return 0;
}