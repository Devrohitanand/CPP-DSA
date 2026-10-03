#include <algorithm>
#include<iostream>
#include <utility>
#include<vector>
using namespace std;

void reverseVec(vector<int>& vec){
    int i = 0 ; int j = vec.size()-1;
    while (i < j) {
        swap(vec[i],vec[j]);
        i++;
        j--;
    }
}

int main(){
    vector <int>vec;
    cout << "Enter the values in vector: ";
    for (int i = 0; i < 5; i++) {
        int values;
        cin >> values;
        vec.push_back(values);
    }
    
    cout << "Reversed vector :";
    reverseVec(vec);
    for (int value : vec) {
        cout << value << " ";
    }
    cout <<endl;
    return 0;
}