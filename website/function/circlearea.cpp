#include<iostream>
using namespace std;
float circleofcircumference(float radious){
      float circumference = 2*3.14*radious;
      cout<<"Circumference of circle : "<<circumference;
}
float circleofarea(float radious){
    float area = 3.14*radious*radious;
    cout<<"Area of circle : "<<area<<endl;
    circleofcircumference(radious);
}
int main(){
     float radious;
     cout<<"Enter the radious : ";
     cin>>radious;
     circleofarea(radious);
    return 0;
}