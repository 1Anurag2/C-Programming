#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the numbera : ";
    cin>>n;
    int oddsum=0;
    int evensum=0;
    while(n>0){
        if(n%2 != 0){
            int odd=n%10;
         oddsum=oddsum*10+odd;
         n=n/10;
        }
        else{
            int even = n%10;
            evensum=evensum*10+even;
            n=n/10;
        }
    }
        cout<<"Sum of the series : "<<oddsum-evensum;
    return 0;
}