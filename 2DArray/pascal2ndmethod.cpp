#include<iostream>
using namespace std;
int factorial(int num){
    if(num==0 || num==1){
        return 1;
    }
    else{
        return num*factorial(num-1);
    }
}
int nCr(int n,int r){
    return factorial(n)/(factorial(r)*factorial(n-r));
}
int main(){
    int rows;
    cout<<"Enter number of rows : ";
    cin>>rows;
    for(int i=0;i<rows;i++){
        for(int j=0;j<=(rows-i-1);j++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<nCr(i,j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}