#include<iostream>
// #include<cmath>
using namespace std;
int square(){

}
int main(){
int n;
cout<<"Enter the number : ";
cin>>n;
cout<<"First natural number : ";
for(int i=1;i<=n;i++){
    cout<<i<<" ";
}
cout<<endl;
// cout<<"Square of natural number : ";
for(int i=1;i<=n;i++){
int square = i*i;
// cout<<num<<" ";
cout<<"Square of "<<i<<" is : "<<square<<endl;
}
return 0;
}