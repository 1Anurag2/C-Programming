#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the number a : ";
    cin>>a;
    cout<<"Enter the number b : ";
    cin>>b;
    cout<<"Enter the number c : ";
    cin>>c;
    if(a>b && a>c){
        cout<<"largest number is : "<<a;
    }
    else if(b>a && b>c){
        cout<<"largest number is : "<<b;
    }
    else{
        cout<<"largest number is : "<<c;
    }
    return 0;
}