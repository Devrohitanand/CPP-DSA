#include <algorithm>
#include<iostream>
using namespace std;
int main (){
    int num;
    cout << "Enter num: ";
    cin >> num;


    for (int i = 0 ; i < num ; i++) {
        for (int j = 0 ; j <i+1; j++) {
            cout << i+1;
        }
        cout << endl;

    
    }

    return 0;
}