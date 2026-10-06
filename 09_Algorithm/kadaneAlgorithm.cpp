#include <climits>
#include<iostream>
using namespace std;
                    
                // Q. maximum Subarray sum

int main (){
    int n = 5;
    int arr[5] = {1,2,3,4,5};
    for (int start = 0; start <5; start++) {                 // Time complexity O(n^3) 
        for (int end = start; end < n; end++) {              
            for (int i=start; i<=end; i++) {
                cout << arr[i];
            }
            cout <<" ";
        }
        cout<<endl;
    }

    int maxSum =INT_MIN;
    for (int start = 0; start <5; start++) {    
        int currentSum = 0;                                                       
        for (int end = start; end < n; end++) {              // Time complexity O(n^2) 
            currentSum+=end;                                 // Brute force approach
            maxSum = max(currentSum,maxSum);            // output 10
        }
    }
    cout << maxSum <<endl;

    int maximumSum =INT_MIN;
    int currentSum = 0;
    for (int i = 0; i <5; i++) {    
        currentSum+=i;                                           // Time complexity O(n) 
        maximumSum = max(currentSum,maximumSum);            // kadane's algorithm
        if (currentSum < 0) {                                    // output 10
            currentSum = 0;
        }                                    
    }
    cout <<maximumSum <<endl;

    return 0;
}