#include<iostream>
using namespace std;
int main (){
    int marks[5] = {1,2,3,4,5,};

    cout << marks[3] <<endl;

    for (int i = 0; i < 5 ; i++){
        cout << marks[i]<<endl;
    }

    int value[5];

    for (int i = 0 ; i <5 ; i++) {
        cin >> value[i];
    }


    return 0;
}