#include <algorithm>
#include <climits>
#include<iostream>
using namespace std;

int main(){
    int arr[6] = {4,2,0,3,2,5};
    int water = 0;

    for (int i = 0; i < 6 ; i++) {

        int leftMax = 0;
        int rightMax = 0;

        // left maximum 
        for (int j = 0; j <= i ; j++) {
            leftMax = max(leftMax,arr[j]);
        
        }
        // right maximum 
        for (int j = 0; j < 6 ; j++) {
            rightMax = max(rightMax,arr[j]);
        
        }

        water += min(leftMax,rightMax) - arr[i];
    }
    cout << water << endl;
    return 0;
}