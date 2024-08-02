#include<iostream>
using namespace std;
int main(){
    int n,r;
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Enter r : ";
    cin>>r;
    int factn =1;
    int factr =1;
    int factnr=1;
    for(int i=1;i<=n;i++){
        factn=factn*i;
    }
    for(int j=1;j<=r;j++){
       factr=factr*j;
    }
    for(int k=1;k<=n-r;k++){
        factnr=factnr*k;
    }
    cout<<"nCr value : "<<factn/(factr*factnr);
    return 0;
}