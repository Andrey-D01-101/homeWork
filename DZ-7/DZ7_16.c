#include <stdio.h>

void is2pow(int);

int main(void)
{
int number;
    printf("Enter a natural number:");
    scanf("%d", &number);
    if(number>0)
        is2pow(number);
    else
        printf("The entered number is not natural");

    return 0;
}

void is2pow(int n)
{
    if(n==2)
    {
        printf("YES");
        return;
    }
    if(n==1)
    {
        printf("NO");
        return;
    }

    if(n&1)
    {
        printf("NO");
        return;
    }
    else
        is2pow(n/2);
}


