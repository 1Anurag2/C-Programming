#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int>v;
for(int i=0;i<=9;i++){
    int element;
    cin>>element;
    v.push_back(element);
}
cout<<endl;
int x;
cout<<"Enter x : ";
cin>>x;
int number =0;
for(int i=0;i<=v.size()-1; i++){
    if(v[i]==x){
        number++;
    }
} 
cout<<number;  
    return 0;
}