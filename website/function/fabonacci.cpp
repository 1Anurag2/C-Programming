#include<iostream>
using namespace std;
int fabnoci(int num){
    if(num==0 || num==1){
        return num;
    }
    else{
    return (fabnoci(num-1)+fabnoci(num-2));
    }
}
int main(){
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    for(int i=0;i<num;i++){
        cout<<fabnoci(i)<<" ";
    }
    return 0;
}
// #include <iostream>
// using namespace std;
// int fib(int n)
// {
//     if (n == 0 || n == 1)
//     {
//         return n;
//     }
//     else
//     {
//         return (fib(n - 1) + fib(n - 2));
//     }
// }
// int main()
// {
//     int n;
//     cout << "Enter the number : ";
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         cout << fib(i) << " ";
//     }
//     return 0;
// }