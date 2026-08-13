#include<iostream>
#include <ostream>
using namespace std;
int main(){
    int reverseStar;
    cout << "Enter number: ";
    cin >> reverseStar;

    for (int i = 0; i < reverseStar; i++) {
        
        for (int j = reverseStar; j>=i+1 ;j--) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}