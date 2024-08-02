#include<iostream>
using namespace std;
class laptop{
  private:
  int a,b,multiply;
  public:
  void firstdigit(){
    cout<<"Enter the first number : ";
    cin>>a;
  }
  void seconddigit(){
    cout<<"Enter the second number : ";
    cin>>b;
  }
  void cal(){
    multiply = a*b;
  }
  void out(){
    cout<<"Multiplication of the numbers : "<<multiply;
  }
};
int main(){
    laptop anu;
    anu.firstdigit();
    anu.seconddigit();
    anu.cal();
    anu.out();
    return 0;
}
