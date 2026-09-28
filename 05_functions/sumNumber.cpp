#include<iostream>
using namespace std;

// sum of 2 number 
int sum (int a, int b){
    int sum = a + b;
    cout << sum << endl;
    return sum;

}

int product(int num1,int num2){
    int product = num1 * num2;
    cout << product << endl;
    return product;
}

int decimalVal(double num1,double num2){
    double decimalVal = num1 * num2;
    cout << decimalVal << endl;
    return decimalVal;

}
// min of 2 

int minOfTwo(int number1, int number2){

    if (number1>number2) {
     return number2;
 
    }
    else{
        return number1;
    }
}

int main(){
    sum(10,20);
    product(10, 10);
    decimalVal(12.33, 12.33);
   cout << minOfTwo(2, 10) <<endl;
   
    return 0;
}