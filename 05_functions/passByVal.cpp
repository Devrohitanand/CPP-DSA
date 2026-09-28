#include<iostream>
using namespace std;

void count(int x){

    x= x * 10;
    cout << "X = "<<x <<endl;
    
}


int main(){
    int x = 5;
    count(x);

    cout << "X = "<<x <<endl;

    return 0;
}