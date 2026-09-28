#include<iostream>
using namespace std;

// function definition

void printHello(){

    cout<< "hello rohit"<<endl;

}
int valPrintHello(){

    cout<< "hello rohit"<<endl;
    return 3;
}


int main(){

    // function call / invoke

    printHello();
 
    int val = valPrintHello();
    cout << valPrintHello() << endl;

    return 0;
}