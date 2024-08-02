#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows : ";
    cin>>n;
    int num =1;
    int d=64;
    for(int i=0; i<=n; i++){
        for(int j=0; j<=i; j++){
            if (i%2 != 0)
            {
                cout<<" "<<num;
                num++;
            }
            else if(i%2 == 0){
                  d++;
                char ch=(char)d;
                cout<<" "<<ch;
            } 
        }
        cout<<endl;
    }
    return 0;
}