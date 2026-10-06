#include <algorithm>
#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int>nums = {4,2,0,3,2,5};            // This is not the best approach this is the brute for approach 
    int water = 0;                                                      // Time complexity O(n^2)
    for (int i = 0; i<nums.size(); i++ ) {
        int leftMax = 0;
        int rightMax = 0;

        // left maximum

        for (int j = 0 ; j <= i; j++) {
            leftMax = max(leftMax,nums[j]);
        }

        // right maximum

        for (int j = 0 ; j < nums.size(); j++) {
            rightMax = max(rightMax,nums[j]);
        }
        water += min(leftMax,rightMax) - nums[i];
    }
    cout << water <<endl;
    return 0;
}