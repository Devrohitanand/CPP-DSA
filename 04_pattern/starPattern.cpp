#include <iostream>
using namespace std;
int main(){
    int star;
    cout << "Enter side of star: ";
    cin >> star;
    for (int i = 0; i <=star - 1; i++) {
            for (int j = 0; j<=star - 1; j++ ) {
            cout <<"* ";
            }
    cout << endl;
    }
    return 0;
}