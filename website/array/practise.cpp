#include<iostream>
#include<list>
using namespace std;
int main(){
list<int>my_list;
for(int i = 0; i<7;i++){
  int element ;
  cin>>element;
  my_list.pop_back();
}
cout<<my_list.size();
}