#include <iostream>
using namespace std;
int largestnumbeindex(int arr[], int size)
{
    int max = INT16_MIN;
    int maxindex = -1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            maxindex = i;
        }
    }
    return maxindex;
}
int main()
{
    int arr[6] = {5, 4, 2, 5, 3, 5};
    int largestelementindex = largestnumbeindex(arr, 6);
    cout << arr[largestelementindex] << endl;
    int largestelement = arr[largestelementindex];
    for (int i = 0; i < 6; i++)
    {
        if (arr[i] == largestelement)
        {
            arr[i] = -1;
        }
    }
    int indexofsecondlargest = largestnumbeindex(arr, 6);
    cout << arr[indexofsecondlargest] << endl;
}
