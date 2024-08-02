#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int numbers[] = {5,6,3,2,4,8,9,7,1,0};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    sort(numbers , numbers+size);
    cout<<"Stored numbers : ";
    for(int i=0; i<size; i++){
        cout<<numbers[i]<<" ";
    }
    cout<<endl;
return 0;
}