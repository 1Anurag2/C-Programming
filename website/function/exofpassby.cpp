#include<iostream>
using namespace std;
int sum(int x, int y=2, int z=4){
    int add = x+y+z;
    return add;
}
int main(){
    // int a=5;
    // sum(a);
    cout<<sum(6)<<endl;
    cout<<sum(6,4)<<endl;
    cout<<sum(1,1,1);
return 0;
}