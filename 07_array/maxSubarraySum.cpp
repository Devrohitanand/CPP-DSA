#include<iostream>
using namespace std;

int main (){
    int arr[5] = { 1,-10,-13,4,5};
    int count = 0;

    for (int i = 0 ; i < 5; i++) {
        count += arr[i];
    }
    cout<< count <<endl;
    return 0;
}