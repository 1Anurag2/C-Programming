#include<iostream>
using namespace std;
int main(){
      int n;
      cout<<"Enter number of rows : ";
      cin>>n;
      for (int i = 1; i<=n; i++){
        for(int j=1; j<=i;j++){
            cout<<" ";
        }
        for(int j=0; j<=i;j++){
                // if(j==1 || i==1 || j==2*n-i){
                cout<<"*";
                // }
                // else{
                    cout<<" ";//
                }
        cout<<endl;
            }
            // for(int j=0;j<=n-i;j++){
            //     if(i==1 || j==n-i){
            //     cout<<"*";
            //     }
            //     else{
            //         cout<<" ";
            //     }
            // }
        
return 0;
}