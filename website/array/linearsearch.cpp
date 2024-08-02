#include<iostream>
using namespace std;
int main(){
    int arr[7] = {2,3,5,11,3,55,6};
    int n;
    cout<<"Enter the number which you find : ";
    cin>>n;
    for(int i=0; i<7;i++){
        if(arr[i]==n){
            cout<<"Element index is : "<<i<<" "<<endl;
            // break;  
        }
    }
    return 0;
}