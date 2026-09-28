#include<iostream>
using namespace std;

int sumOfNumber(int n){
    int sum = 0;
    for ( int i = 0; i<=n ;i++) {
     sum+=i;
    }
    return sum;

}


int main(){
    cout << sumOfNumber( 5) <<endl;
    return 0;
}