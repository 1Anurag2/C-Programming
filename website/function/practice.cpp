#include<iostream>
using namespace std;
class Person{
    private:
    string name;
    int age;
    public: 
    void setName(string n){
        name = n;
    }
    void setAge(int a){
        age = a;
    }
    void anu(){
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
    }
};
int main(){
// Create an object of the person class
Person p1;
// set the nmae and age of the person using setter functions 
p1.setName("John");
p1.setAge(21);

// Display tyhe information using a member function
p1.anu();
Person anu;
anu.setName("Anurag verma ");
anu.setAge(23);
anu.anu(); 
return 0;
}