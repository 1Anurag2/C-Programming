#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int countnumber =0;
    while(n>0){
      countnumber++;
      n=n/10;
    }
    cout<<countnumber;
    return 0;
}