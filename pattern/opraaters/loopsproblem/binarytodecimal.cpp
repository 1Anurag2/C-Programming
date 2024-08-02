#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int sum=0;
    int i=1;
    while(n>0){
       int num=n%10;
       sum=sum+num*i;
       n=n/10;
       i*=2;
    }
    cout<<"Decimal number : "<<sum;
    return 0;
}