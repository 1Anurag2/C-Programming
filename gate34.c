#include <stdio.h>
void foo(int *p, int x)
{
    *p = x;
}
int main()
{
    int *z;
    int a = 20, b = 25;
    z = &a;
    foo(z, b);
    printf("%d\n", z);
    printf("%d\n", &a);
    printf("%d\n", a);
    // printf("%d\n", &b);
    return 0;
}
// The output of the given C program is ____25______. (Answer in integer)