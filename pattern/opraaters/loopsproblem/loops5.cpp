#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rows : ";
    cin>>n;
    // cout<<"Enter number of column : ";
    // cin>>m;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        int d=65;
        for(int j=1; j<=2*i-1; j++){
            if(i%2 == 0){
                cout<<j;
            }
            else{
                char ch=(char)d;
                cout<<ch;
                d++;
            }
        }
        cout<<endl;
    }
    return 0;
}