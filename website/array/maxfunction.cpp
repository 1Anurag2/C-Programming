#include<iostream>
using namespace std;
int  maxnum(int arr[], int x){
    int maxnumber = arr[0];
    for(int i=0; i<x;i++){
        if(arr[i]>maxnumber){
            maxnumber = arr[i];
        }
    }
    // cout<<"Maximum number of array : "<<maxnumber;
    return maxnumber;
}
int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    int size = sizeof(arr)/sizeof(arr[0]);
     int max= maxnum(arr,size);
     cout<<max;

    return 0;
}