#include <iostream>
using namespace std;
int main()
{
    int r1, c1;
    cout << "Enter the number of rows of matricx A : ";
    cin >> r1;
    cout << "Enter the number of colume of matricx A : ";
    cin >> c1;
    int A[r1][c1];
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cin >> A[i][j];
        }
    }
    cout << endl;
    int r2, c2;
    cout << "Enter the number of rows of matricx B : ";
    cin >> r2;
    cout << "Enter the number of colume of matricx B : ";
    cin >> c2;
    int B[r2][c2];
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cin >> B[i][j];
        }
    }
    cout << endl;
    int C[r1][c1];
    if (r1 == c1 || r2 == c2  || r1==r2)
    {
        for (int i = 0; i < r1; i++)
        {
            int value ;
            for (int j = 0; j < c1; j++)
            {
                value = A[i][j] + B[i][j];
                C[i][j] = value;
            }
        }
        cout<<"Addition of matrics A and B : ";
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    }
    else{
        cout<<"Addition of this matrics is not possible : "<<endl;
    }
    return 0;
}
