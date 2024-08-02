#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    cout << "Total size of the array : " << sizeof(arr) << endl; // size oprater is used for find the size of array
    cout << "Length of the array : " << sizeof(arr) / sizeof(arr[0]) << endl;
    // for loop we can inisilisation from 0 to n
    for (int i = 0; i < 6; i++)
    {
        cout << "Element of the array : " << arr[i] << endl;
        cout << "And its address of the array : " << &arr[i] << endl;
        cout << endl;
    }
    // for each loop this loop is not bounded excicute for all element
    for (int allelement : arr)
    {
        cout << allelement << endl;
    }

    return 0;
}