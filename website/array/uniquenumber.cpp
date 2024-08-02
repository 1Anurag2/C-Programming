#include<iostream>
using namespace std;
int main(){
    int arr[8]={1,2,3,4,5,3,2,1};
    cout<<endl;
    for(int i=0;i<8;i++){
        for(int j=i+1;j<8;j++){
            if(arr[i]==arr[j]){
                arr[i] = arr[j] = -1;
            }
        }
    }
    for(int i=0;i<8;i++){
        if(arr[i]>0){

        cout<<arr[i]<<endl;
        }
    }
    return 0;
}