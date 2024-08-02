#include<iostream>
using namespace std;
int main(){
   int week,month;
  float year,days;
  cout<<"Enter number of days : ";
  cin>>days;
  week = days/7;
  month = days/30;
  year=days/365;
  cout<<"Number of week : "<<week<<endl;
  cout<<"Numbrer of month : "<<month<<endl;
  cout<<"Number of year : "<<year;
return 0;
}