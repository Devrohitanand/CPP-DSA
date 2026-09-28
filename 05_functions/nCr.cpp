#include <iostream>
using namespace std;

int nCrFactorial(int n,int r){
    int nFactorial = 1;
    for (int i = 1; i<=n; i++) {
        nFactorial*=i;
    }         

    // nCr = n! / r!(n-r)!  

    int rFactorial = 1;
    for (int j = 1; j<=r; j++) {
        rFactorial*=j;
    }
    int s = n -r;
    int sFactorial = 1;
    for (int k = 1; k<=s ; k++) {
        sFactorial*=k;
    }
    int nCr = nFactorial/(rFactorial*sFactorial);
    return nCr;
}

int main(){
   cout << nCrFactorial(5, 2)<< endl;
    return 0;
}