#include <iostream>
using namespace std;
int main(){
    int n , i;
    cout<<"Enter the number : ";
    cin>>n;
    for( i=2;i<=n;i++){
        if(n%i == 0){
            break;
        }
    }
    if(n==i){
        cout<<n<<" is a prime number : ";
    }
    else{
        cout<<"Number is not prime : ";
    }
    return 0;
}