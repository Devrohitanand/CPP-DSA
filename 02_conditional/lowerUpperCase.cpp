#include <iostream>
using namespace std;
int main(){
    char character;
    cout << "Enter character: ";
    cin >> character;

    if (character >= 'a' && character <='z') {
        cout << "your character " << character << " is LOWERCASE" << endl;
    }
    else if (character >= 'A' && character <='Z') {
        cout << "your character " << character << " is UPPERCASE" << endl;
    }
    return 0;
}