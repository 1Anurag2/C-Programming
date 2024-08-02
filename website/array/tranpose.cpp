#include <iostream>
using namespace std;
int main()
{
    int r;
    cout << "Enter the number of rows : ";
    cin >> r;
    int c;
    cout << "Enter the number of colums : ";
    cin >> c;
    cout << "Enter all the elements : " << endl;
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << " " << arr[i][j];
        }
        cout << endl;
    }
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            cout << " " << arr[j][i];
        }
        cout << endl;
    }
    return 0;
}