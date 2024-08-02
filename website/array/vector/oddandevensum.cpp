#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>array;
    for(int i=0;i<=6;i++){
        int element;
        cin>>element;
        array.push_back(element);
    }
    int evensum =0;
    int oddsum =0;
    for(int i=0;i<array.size();i++){
        if((i%2 == 0) || (i==0)){
            evensum =evensum + array[i];
        }
        else{
            oddsum = oddsum + array[i];
        }
    }
    cout<<"Evensum : "<<evensum<<endl;
    cout<<"Oddsum : "<<oddsum<<endl;
    cout<<evensum-oddsum;
    return 0;
}