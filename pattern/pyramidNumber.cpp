#include<iostream>
using namespace std;
int main (){
    int num = 4;
    for (int i = 0 ; i <num; i++) {
         
        // spaces : n-i-1

        for (int k =0; k < num-i-1; k++) {
            cout << " ";
        }
        
        // nums1 : i+1

        for (int j = 1; j<= i+1;j++) {
            
            cout <<j;
        }

        // nums2 : i
        for (int j = i; j>=1;j--) {
            
            cout <<j;
        }
        cout << endl;
    }
    
    return 0;
}