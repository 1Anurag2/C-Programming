#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>myarr;
    for(int i=0;i<=7;i++){
        int element;
        cin>>element;
        myarr.push_back(element);
    }
    cout<<endl;
    int gretestnumber = myarr[0];
    for(int i=1;i<=myarr.size()-1;i++){
         if(myarr[i]>myarr[0]){
            gretestnumber=myarr[i];
         }
    }
            cout<<"Gretestnumber : "<<gretestnumber;
    cout<<endl;
    return 0;
}