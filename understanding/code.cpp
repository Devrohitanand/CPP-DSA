#include <iostream>
using namespace std;
int main(){
    int age = 25;
    float harsh = 20.54;
    double satyam = 21.67543;
    char sarthak = 'S';
    bool vibhash = true;
    cout << age << " int - and it's size is "<<sizeof(age) << endl;
    cout << harsh << " float - and it's size is "<<sizeof(harsh) << endl;
    cout << satyam << " double - and it's size is "<<sizeof(satyam) << endl;
    cout << sarthak << " char - and it's size is "<<sizeof(sarthak) << endl;
    cout << vibhash << " bool - and it's size is "<<sizeof(vibhash) << endl;

    return 0;
}