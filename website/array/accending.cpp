#include <iostream>
#include <vector>
using namespace std;
void sortzeroandones(vector<int> &v)
{
    // 1 0 1 1 0 0 0
    //counting zero
    //zeroes_count = 4
    int zeroes_count = 0;
    for (int ele : v)
    {
        if (ele == 0)
        {
            zeroes_count++;
        }
    }
    for(int i=0;i<v.size();i++){
        if(i<zeroes_count){
            v[i] = 0;
        }
        else{
            v[i] == 1;
        }
    }
}
int main()
{
    vector<int> v;
    int n;
    cout << "Enter n : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int element;
        cin >> element;
        v.push_back(element);
    }
    sortzeroandones(v);
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}