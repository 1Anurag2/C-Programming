#include<iostream>
using namespace std;
class anurag{
    private:
    int a,b;
     int sum;

    public:
    void firstnum(){
        cout<<"Enter the first number : ";
        cin>>a;
    }
    void secondnum(){
        cout<<"Enter the second number : ";
        cin>>b;
    }
    void cal(){
       sum = a+b;
    }
    void out(){
        cout<<"Sum of the numbers : "<<sum;
    }
};
int main(){
    anurag anu;
    anu.firstnum();
    anu.secondnum();
    anu.cal();
    anu.out();
    return 0;
}