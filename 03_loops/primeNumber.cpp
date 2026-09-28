#include <iostream>
using namespace std;
int main(){
    int isPrime;
    cout << "Enter number: ";
    cin >> isPrime;  

    for (int i =2; i < isPrime-1;i++) {
        if (isPrime % i ==0) {
        cout << "Not Prime" << endl;
        return 0;
        }
    }
    cout << "Prime" <<endl;
    return 0;
}



// #include <iostream>
// using namespace std;
// int main(){
//     int isPrime;
//     cout << "Enter number: ";
//     cin >> isPrime;  

//     for (int i =2; i*i <= isPrime;i++) {     // 2 to root n
//         if (isPrime % i ==0) {
//         cout << "Not Prime" << endl;
//         return 0;
//         }
//     }
//     cout << "Prime" <<endl;
//     return 0;
// }





// #include <iostream>
// using namespace std;
// int main(){
//     int isPrime;
//     cout << "Enter number: ";
//     cin >> isPrime;
//     bool p = true;

//     for (int i =2; i <isPrime-1;i++) {    /// using bool value
//         if (isPrime % i ==0) {
//             p = false;
//             break;
//         }
//     }
//     if (p == true) {
        
//         cout << "Prime" <<endl;
//     }
//     else {
    
//         cout << "Not Prime" << endl;
//     }
//     return 0;
// }


