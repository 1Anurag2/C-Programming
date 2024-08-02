#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    cout<<"Size : "<<v.size()<<endl;
    cout<<"Capacity : "<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"Size : "<<v.size()<<endl;
    cout<<"Capacity : "<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"Size : "<<v.size()<<endl;
    cout<<"Capacity : "<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"Size : "<<v.size()<<endl;
    cout<<"Capacity : "<<v.capacity()<<endl;
    v.push_back(4);
    cout<<"Size : "<<v.size()<<endl;                 //capacity will increase when size is greater than capacity.
    cout<<"Capacity : "<<v.capacity()<<endl;         //     yha pr size 4 hai and capacity bhi 4 hai jiske karan
    v.push_back(5);                                  //  capacity will not increase.
    cout<<"Size : "<<v.size()<<endl;
    cout<<"Capacity : "<<v.capacity()<<endl;
    v.push_back(6);
    cout<<"Size : "<<v.size()<<endl;                 
    cout<<"Capacity : "<<v.capacity()<<endl;
    v.resize(10);
    // v.push_back(1);
    cout<<"Size : "<<v.size()<<endl;
    cout<<"Capacity : "<<v.capacity()<<endl;        // capacity will depande on compiler
    v.pop_back();
    v.pop_back();
    cout<<"Size : "<<v.size()<<endl;
    cout<<"Capacity : "<<v.capacity()<<endl;
    return 0;
}