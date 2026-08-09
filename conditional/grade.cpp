#include <iostream>
using namespace std;
int main (){
    int grade;
    cout << "Enter your grade here: ";
    cin >> grade;

    if (grade >= 90) {
        cout << "You got a grade A" <<endl;
    }
    else if (grade >= 80) {
        cout << "You got a grade B" <<endl;
    }
    else if (grade >= 70) {
        cout << "You got a grade C" <<endl;
    }
    else if (grade >= 60) {
        cout << "You got a grade D" <<endl;
    }
    else {
        cout << "You're FAIL" <<endl;
    }
    return 0;
}