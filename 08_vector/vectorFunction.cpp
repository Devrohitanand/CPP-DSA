#include<iostream>
#include<vector>
using namespace std;

int main (){
    vector<int>vec = {1,2,3,4,5};      

    cout << "Size = "<<vec.size()<<endl;                 // size function

    vec.push_back(6);                                 // insertion of values in vector (last index)

    vec.pop_back();                                     // poping an value from vector ( by default from last index)

    cout << "After push back size = " << vec.size() <<endl;

    cout <<"Front value :"<< vec.front() <<endl;        //  for getting 0th index value

    cout <<"Front value :"<< vec.back() <<endl;         //  for getting nth index value

    cout <<"At :" << vec.at(4);                      // for getting particular index value 

    cout <<endl;
    vector<int>vec2;
    vec2.push_back(1);
    vec2.push_back(2);
    vec2.push_back(3);
    vec2.push_back(4);
    vec2.push_back(5);

    cout << "Size :"<<vec2.size()<<endl;
    
    cout << "Capacity :"<<vec2.capacity()<<endl;       // shows the actual capacity of storing elements or value in vector
    
    

    return 0;
}