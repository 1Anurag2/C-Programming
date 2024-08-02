#include<iostream>
using namespace std;
int main(){
    int arr[8]={2,3,4,5,6,1,2,3};
    int x;
    cout<<"Enter x : ";
    cin>>x;
    int numberofpairs = 0;
    for(int i=0;i<8;i++){
       for(int j=i+1; j<8;j++){
        if(arr[i]+arr[j]==x){
            numberofpairs++;
            cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
        }
       }
    }
    cout<<numberofpairs;
    return 0;
}