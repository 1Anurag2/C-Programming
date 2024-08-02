#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"Enter the number : ";
   cin>>n;
   int sum=0;
   while(n>0){
      int remender=n%10;
    sum=sum+remender;
      n=n/10;
   }
   cout<<"Sum of the number : "<<sum;
return 0;
}