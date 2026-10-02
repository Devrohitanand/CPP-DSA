#include <algorithm>
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int size = 6;
    int val[6] = {12,13,-14,14,15,1000};
    int largest = INT_MIN;
    int idx = -1;
    for (int i = 0; i < size; i++) {

        // if (val[i] > largest) {
        //     largest = val[i];
        // }

        largest = max(val[i],largest);
        idx =i;
    }
    cout<<"largest value: " <<largest << endl <<"index value: "<<idx <<endl;

    return 0;
}
