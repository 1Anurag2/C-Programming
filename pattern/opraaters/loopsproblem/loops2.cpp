#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rows : ";
    cin>>n;
    for(int i=1; i<=n;i++){
        for(int j=1;j<=n-i;j++){     //colume divided into two part 
                cout<<" ";           //  j for space & k for *
        }
            for(int k=1;k<=2*i-1;k++){
                cout<<"*";
            }
        cout<<endl;

    }
        
    return 0;
}