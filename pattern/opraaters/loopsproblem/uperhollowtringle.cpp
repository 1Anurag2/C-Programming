#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rows : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
     cout<<" ";
        }
        int d=65;
        int num=1;
        for(int j=1;j<=2*i-1;j++){
            if(j==1 || j==2*i-1 ){
                char ch = (char)d;
            cout<<ch;
            d++;
            }
            else if(i==n){
                cout<<num;
                num++;
            }
           else{
            cout<<" ";
           }
        }
        cout<<endl;    //           *
    }                       //         
    return 0;
}
