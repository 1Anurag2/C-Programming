#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cout << "Enter number of rows : ";
    cin >> n;
    cout << "Enter number of colume : ";
    cin >> m;
    int A[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> A[i][j];
        }
    }
    cout << endl;
    int transpose[m][n];
    cout<<"Transpose of matrics : "<<endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            transpose[i][j] = A[j][i];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}