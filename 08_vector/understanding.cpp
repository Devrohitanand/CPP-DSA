#include<iostream>
#include<vector>
using namespace std;

int main(){
    //initialization of vector

    vector<int>vec = {1,2,3,4,5};
    // cout << vec[3];

    vector<int> vec2;  // 0

    vector<int>vec3(5,0);

    vector<char>vec4 = {'a','b','c','d','e'};

    for(char val : vec4){
        cout << val <<endl;       // syntax for - for each loop
    }

    return 0;
}