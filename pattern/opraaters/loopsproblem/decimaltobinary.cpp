#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"Enter the number : ";
   cin>>n;
   int ans=0;
   int power =1;
   while(n>0){
     int paritydigit = n%2;
     ans += paritydigit*power;
     n=n/2;
     power*=10;;
   }
   cout<<ans;
return 0;
}
