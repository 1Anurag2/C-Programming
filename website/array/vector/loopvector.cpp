#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector<int>myarr;
  for(int i=0;i<=5;i++){
    int element;
    cin>>element;
    myarr.push_back(element);
  }
  for(int i=0; i<myarr.size(); i++){
    cout<<myarr[i]<<" ";
  }
  cout<<endl;
  //for each loop
  for(int ele: myarr){
    cout<<ele<<" ";
  }
  cout<<endl;
  myarr.insert(myarr.begin()+3,9);
  myarr.insert(myarr.end()-1,8);
  myarr.pop_back();
  myarr.erase(myarr.end()-3);
  //while loop
  int idx =0;
  while(idx < myarr.size()){
    cout<<myarr[idx++]<<" ";
  }
return 0;
}