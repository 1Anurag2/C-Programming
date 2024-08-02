#include<iostream>
using namespace std;
void decrease(int n1, int n2){
    n1--;
    n2=n2-2;
    cout<<n1<<" : "<<n2<<endl;
}
int main(){
  int p=26;
  int q=13;
  cout<<(p)<<" : "<<q<<endl;
  decrease(p,q);
return 0;
}