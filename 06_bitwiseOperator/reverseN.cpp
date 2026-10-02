#include <iostream>
using namespace std;

int reverseN(int n){
    int rev = 0;
    while(n > 0 ){
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }
    return rev;
}

int main (){
    int a;
    cin>>a;
    cout << reverseN(a) << endl;
    return 0;
}