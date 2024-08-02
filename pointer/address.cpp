// kisi data type ke address ko store karne ke liye pointer ka use karte hai 
// jis data type ka address store karna hai phle us data type ko likhe phir * phir different variable ka name jo adress ko store karega
#include<iostream>
using namespace std;
int main(){
    int num = 5;
    cout<<"Hello world : "<<endl;         
    cout<<&num<<endl;
    int *add= &num;
    cout<<add<<endl;
    cout<<&add<<endl;

// float * ptr;
// float y= 7.4;
// ptr=&y;
// cout<<ptr<<endl;

int  * ptr;
int  y = 7;
cout<<y<<endl;
ptr= &y;                                               
cout<<"Address stored inside ptr : "<<ptr<<endl;
cout<<"Value present at thr address stored in ptr : "<<*ptr;
// dereference operator



    return 0;
}