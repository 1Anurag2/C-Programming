#include<iostream>
using namespace std;
int main(){
      int x, y;  // declare x and y so x, y has garbage value
      cin>>x>>y;   // taking input of x and y

      int *ptrx = &x; // &x fetched address of x and then store it in ptrx
      int *ptry = &y; // &y fetches address of y and then store it in ptry

      int result; // declare result so it has garbage value
      int *ptr_result = &result;

      *ptr_result = *ptrx + *ptry;
      cout<<result<<" "<<*ptr_result<<"\n";
return 0;
}