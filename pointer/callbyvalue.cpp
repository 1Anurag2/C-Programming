#include<iostream>
using namespace std;
void swap(int *x , int *y){
    // cout<<" X = "<<x<<" : "<<" Y = "<<y<<endl;
    int temp;
    temp = *y;
    *y = *x;
    *x = temp;
    // cout<<" X = "<<x<<" : "<<" Y = "<<y<<endl;
}
int main(){
    int x = 10;
    int y = 20;

    int *p1 = &x;
    int *p2 = &y;
     swap( p1 , p2);
    cout<<" X = "<<x<<" : "<<" Y = "<<y<<endl;
return 0;
}