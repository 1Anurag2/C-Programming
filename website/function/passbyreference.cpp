#include<iostream>
using namespace std;
void changevalue(int &x, int y){      //  this is exampal of pass by reference 
    x=100;
    y=50;
}
int main(){
   int p = 55;
   int q=p;      //& ampercentage it is used to same memory location.
   q++;
   cout<<p<<endl;
   cout<<q<<endl;
   cout<<&p<<endl;
   cout<<&q<<endl;
   changevalue(p,q);
   cout<<p<<" "<<q;
return 0;
}