#include<iostream>
#include<vector>
using namespace std;
int main(){
    // vector<int>v{5,6,7,8,9,17,56};
   int arr[7]={1,3,4,5,6,7,9};
    // for(int i=0;i<=6;i++){
    //     int element;
    //     cin>>element;
    //     v.push_back(element);
    // }
    cout<<endl;
    // cout<<v.size();
    bool sorted=true;
    for(int i=0;i<=7;i++){
        if(arr[i]<=arr[i-1]){
          sorted = false;
        }
    }
    cout<<sorted;
return 0;
}