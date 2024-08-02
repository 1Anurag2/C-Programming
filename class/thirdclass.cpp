#include<iostream>
using namespace std;
class factorial{
 private:
 int n;
 int res = 1;
 public:
 void input(){
    cout<<"Enter the number : ";
    cin>>n;
 }
 void cal(){
    for(int i=1; i<=n;i++){
      res = res*i;
    }
 }
 void output(){
    cout<<"Factorial of the number : "<<res;
 }
};
int main(){
    factorial p1;
    p1.input();
    p1.cal();
    p1.output();
    return 0;
}