#include <iostream>
using namespace std;
int main()
{
    int r1, c1;
    cout << "Enter the row of matrics A : ";
    cin >> r1;
    cout << "Enter the colume of matrics A : ";
    cin >> c1;
    int A[r1][c1];
    cout << "Enter element of matrics A : " << endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cin >> A[i][j];
        }
    }
    cout << endl;
    int r2, c2;
    cout << "Enter number of rows of matrics B : ";
    cin >> r2;
    cout << "Enter number of colume of matrics B : ";
    cin >> c2;
    int B[r2][c2];
    cout << "Enter element of matrics B : " << endl;
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cin >> B[i][j];
        }
    }
    cout << endl;
    if (c1 != r2)
    {
        cout << "Multiplication of this matrics is not possible for this input ";
    }
    int C[r1][c2];
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            int value = 0;
            for (int k = 0; k < c1; k++)
            {
                value = value + A[i][k] * B[k][j];
            }
            C[i][j] = value;
        }
    }
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}