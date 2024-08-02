#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter number of table : ";
    cin>>n;
    cout<<"up to";
    cin>>m;
    for(int i=1;i<=m; i++){
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
    }
    return 0;
}