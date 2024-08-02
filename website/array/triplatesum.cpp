#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"How many time flow the loops : ";
    cin>>n;
    int arr[n];
    cout<<"Enter all the element : ";
    for(int i=0;i<=n;i++){
        cin>>arr[i];
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<endl;
    int x;
    cout<<"Enter x : ";
    cin>>x;
    int tripletspair = 0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            for(int k=j+1;k<size;k++){
                if(arr[i]+arr[j]+arr[k]==x){
            cout<<"("<<arr[i]<<","<<arr[j]<<","<<arr[k]<<")"<<endl;
            tripletspair++;
                }
            }
        }
    }
    cout<<endl;
    cout<<"Number of triplets : "<<tripletspair;
    return 0;
}