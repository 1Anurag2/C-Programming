#include<iostream>
using namespace std;
int main(){
    int a=5;
    int b=8;
    cout<<"Before swapping a : "<<a<<endl;
    cout<<"Before swapping b : "<<b<<endl;
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout<<"After swapping a : "<<a<<endl;
    cout<<"After swapping b : "<<b;
return 0;
}