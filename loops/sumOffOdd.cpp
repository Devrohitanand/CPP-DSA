#include <iostream>
using namespace std;
int main (){
    int number, oddSum = 0;
    cout << "Enter the number: ";
    cin >> number;

    for (int i = 1; i <= number; i+=2) {       // updating value i with +2
        
        oddSum += i;
    }
    cout << "sum: " << oddSum << endl;
    return 0;
}

// #include <iostream>
// using namespace std;
// int main (){
//     int number, oddSum = 0;
//     cout << "Enter the number: ";
//     cin >> number;

//     for (int i = 1; i <= number; i++) {
        
//         if (i%2==1) {                using - conditional
        
//             oddSum += i;
//         }
//     }
//     cout << "sum: " << oddSum << endl;
//     return 0;
// }