#include<iostream>
using namespace std;
int main (){
    int num = 4;
    for (int i = 0 ; i <num; i++) {

        for (int k =0; k < i; k++) {
            cout << " ";
        }
        
        for (int j = 0; j<num-i;j++) {
            
            cout << i+1 ;
        }
        cout << endl;
    }
    
    return 0;
}