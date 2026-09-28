#include<iostream>
using namespace std;

int nFactorial(int n){
    int fact = 1;
    for ( int i = 1; i<=n ;i++) {
     fact*=i;
    }
    return fact;

}


int main(){
    cout << nFactorial( 3) <<endl;
    return 0;
}