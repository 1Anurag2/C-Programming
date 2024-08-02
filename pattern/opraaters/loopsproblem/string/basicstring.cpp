#include<iostream>
using namespace std;
int main(){
    // char arr[6] = {'a','n','u','r','a','g'};
    int r;
    cout<<"Ennter the size of array : ";
    cin>>r;
    char arr[r];
    cout<<"Enter the alphabate : ";
    for(int i=0; i<=r-1;i++){
        cin>>arr[i];
    }
    cout<<endl;
    for(int i=0; i<=r-1;i++){
    cout<<arr[i];
    }
    cout<<endl;
    cout<<arr[3];
    return 0;
}