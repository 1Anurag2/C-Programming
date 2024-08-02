#include<bits/stdc++.h>    //  its include all stl library 
using namespace std;        //   #include<iostream>
int main(){                 //  #include<vector>
    vector<int>myarr;       //   #include<algorithms>
    for(int i=0;i<=7;i++){
        int element;
        cin>>element;
        myarr.push_back(element);
    }
    cout<<endl;
    int x;
    cout<<"Enter x : ";
    cin>>x;
    int gretestnumber = myarr[0];
    for(int i=1;i<=myarr.size();i++){
         if(myarr[i]>x){
            gretestnumber=myarr[i];
            cout<<gretestnumber<<" ";
            cout<<endl;
         }
    }
    cout<<endl;
    return 0;
}