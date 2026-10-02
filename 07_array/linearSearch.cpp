#include<iostream>
using namespace std;

int linearSearch(int arr[] , int s, int target){
    for (int j = 0; j < s; j++) {
        if (arr[j] == target) {
            return j;
        }
    }
    return -1;
}

int main(){
    int size =10;
    int targetElement;
    int arr[10];
    
    cout << "Enter the elements in array :" <<endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << " Enter the target element: " <<endl;
    cin >> targetElement;
    
    cout << "Array : ";
    for (int j = 0; j < size ; j++) {
        cout <<arr[j]<< " ";
    }
    cout <<endl;

    cout << "Target Element :" << targetElement<<endl;
    cout <<"Target Element at index : "<<linearSearch(arr,size, targetElement) <<endl;


    return 0;
}