#include<iostream>
using namespace std;
int main(){
    int rows,colum;
    cin>>rows>>colum;
    int array[rows][colum];
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=colum;j++){
        cin>>array[i][j];
        }
    }
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=colum;j++){
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}