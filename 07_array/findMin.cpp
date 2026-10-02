#include <climits>
#include<iostream>
using namespace std;
int main(){
    int nums[6] = {5 , 15 , 22 , 1 , -15 ,24};
    int smallest = INT_MAX;
    
    for (int i = 0 ; i < 6 ; i++) {
        if (nums[i] < smallest) {
            smallest = nums[i];
        };
    
    }
    cout << smallest <<endl;
    

    return 0;
}

