#include<iostream>
using namespace std;
int main(){
    int array[7] = {3,1,6,8,5,4,9};
    int n = 7;
    int k = 3;
     k= k%n;
     int ansarray[7];
     int j = 0;
    // inserting last k elements in ans array 
     for(int i = n-k; i<n;i++){
        ansarray[j++] = array[i];
     }
     // inserting first n-k elements in ans array
     for(int i=0;i<=k; i++){
        ansarray[j++] = array[i];
     }
     for(int i=0;i<n;i++){
        cout<<ansarray[i]<<" ";
     }
     cout<<endl;
    return 0;
}