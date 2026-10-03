#include<iostream>
#include<vector>
using namespace std;


int linearSearch(vector<int>vec,int target){

    for (int i = 0; i <vec.size(); i++) {
        if (vec[i]==target) {
            return i;
        }
    }
    return -1;
}

int main (){
    vector<int>vec;
    cout << "Enter the value in Vector :";
    for (int i = 0 ; i < 5; i++) {
        int val;
        cin >> val;
        vec.push_back(val);
    }

    cout << "Vector :";
    for(int value : vec){
        cout <<value  << " ";
    }
    cout << endl;

    int targetNumber;
    cout << "Enter the target number :";
    cin >> targetNumber;
    
    cout <<"Fount at index :"<<linearSearch(vec, targetNumber) <<endl;

    return 0;
}