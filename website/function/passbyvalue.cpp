#include<iostream>
using namespace std;
void changevalue(int z){       // This is exampal of pass by  value 
     z=100;
}
int main(){
    int a=5;
    changevalue(a);
    cout<<a;
    return 0;
}