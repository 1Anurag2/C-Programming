#include<iostream>
using namespace std;
int oddnumber(int n){
    int sum=0;
for(int i=0; i<=n;i++){
   if(i%2 != 0){
    cout<<i<<" "<<endl;
    sum=sum+i;
   }
}
cout<<"Sum of the odd number from 1 to n : "<<sum;
}



int main(){
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    oddnumber(num);
    return 0;
}