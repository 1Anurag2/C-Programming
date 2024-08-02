#include<iostream>
using namespace std;
int main(){
     int d,m,w,y,remaingday;
    cout<<"Enter number of days : ";
    cin>>d;
    y=d/365;
    d=d%365;
    m=d/30;
    d=d%30;
    w=d/7;
    d=d%7;
    remaingday = d/1;
    cout<<y<<endl;
    cout<<m<<endl;
    cout<<w<<endl;
    cout<<remaingday;
return 0;
}