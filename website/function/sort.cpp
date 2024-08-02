#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    vector<int>numbers = {3,6,4,2,1,9,8,7,5,0};
    sort(numbers.begin(), numbers.end());
    cout<<"Sorted numbers : ";
    for(const auto&num:numbers){
        cout<<num<<" ";
    }
    cout<<endl;
    return 0;
}