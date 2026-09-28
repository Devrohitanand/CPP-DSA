#include<iostream>
using namespace std;

int sumOfDigits(int number){

    int sumOfDigits = 0;
    int lastDigit = 0;
    while (number>0) {
        lastDigit = number % 10;
        number = number / 10;
        sumOfDigits+= lastDigit;
    }
    return sumOfDigits;
}


int main(){
    
    cout <<sumOfDigits(1234) <<endl;
    return 0;
}