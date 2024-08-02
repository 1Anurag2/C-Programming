#include <iostream>
using namespace std;
int largestelement(int arr[], int size)
{
    int maxnum = INT16_MIN;
    int second_max = INT16_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > maxnum)
        {
            maxnum = arr[i];
        }
    }
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > second_max && arr[i] != maxnum)
        {
            second_max = arr[i];
        }
    }
    return second_max;
}
int main()
{
    int arr[7] = {2, 3, 4, 5, 4, 5, 2};
    int secondmax = largestelement(arr, 7);
    cout << secondmax;
    return 0;
}