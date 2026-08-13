#include <iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter number count: ";
    cin >> num ;
    int initialVal = 1;  
    
    for (int i = 0; i <= num - 1; i++) {
    
        for (int j = 0; j <= num -1; j++) {
            
            cout << initialVal << " ";
            initialVal += 1; 
        }
        cout << endl;
        
    }
    return 0;
}