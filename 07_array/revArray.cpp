#include<iostream>
#include <utility>
using namespace std;

void revArray(int arr[], int n){
    int i = 0 , j = n -1;
    
    while (i < j) {
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}

int main(){
    int size = 10;
    int arr[10];

    cout << "Enter the elements of array upto 10 elements: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    revArray(arr, size);

    for (int i = 0; i < size; i++) {
        cout << arr[i]<<" ";
    }
    cout << endl;
    
    return 0;
}