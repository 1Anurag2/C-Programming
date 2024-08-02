#include<iostream>
using namespace std;
int voter(int age){
   if(age>18){
    cout<<"You are elegible for voting because your age is : "<<age;
   }
   else{
    cout<<"You are not eligible for voting because your age is : "<<age;
   }
}
int main(){
    int age;
    cout<<"Enter the age : ";
    cin>>age;
    voter(age);
return 0;
}