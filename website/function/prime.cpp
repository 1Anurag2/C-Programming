#include <iostream>
using namespace std;
bool isprime(int num)
{
    if (num <= 1)
    {
        return false;
    }
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

bool isprimeBtr(int num)
{
    for (int i = 2; i <= num - 1 ; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
    cout<<"Prime number is : ";
    for (int i = 1; i <= n; i++)
    {
        if (isprimeBtr(i))
        {
            cout << i << " ";
        }
    }
    return 0;
}