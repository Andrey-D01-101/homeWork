#include <stdio.h>

int nod (int, int);

int main(void)
{
int x, y;
    printf("Enter two positive integers separated by a space:");
    scanf("%d %d", &x, &y);
    printf("\ngreatest common divisor: %d", nod(x, y));

    return 0;
}

int nod (int a, int b)
{
int t;
    while(b!=0)
    {
        t=b;
        b=a%b;
        a=t;
    }
    return a;
}
