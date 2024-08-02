#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of the array : ";
    cin>>n;
    char arr[n];
    // for(int i=0;i<=n-1;i++){
    //     cin>>arr[i];
    // }
    // for(int i=0;i<=n-1;i++){
    //     cout<<arr[i]<<" ";
    // }
  for(char &element : arr){         //agar yha pr & ka use na kare to value element vale variable
    cin>>element;                   // me store hoga n ki arr vale variable me 
  }                                  //  & use se same memory location hoga dono ka 
  for(char element : arr){
    cout<<element ;
  }
    return 0;
}