#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter size of array : ";
  cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   int size = sizeof(arr)/sizeof(arr[0]);
   cout<<size;
   int maxnumber = arr[0];
   for(int i=0;i<size;i++){
     if(arr[i]>maxnumber){
      maxnumber = arr[i];
     }
   }
   cout<<"Maximum number of array : "<<maxnumber;
return 0;
}