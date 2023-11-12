#include <stdio.h>
#include <locale.h>

int main(void)
{
int i;
int a, b;

    printf("Enter two integers:");
    scanf("%d %d", &a, &b);

    if (!(a<=b&&a<=100&&a>=-100&&b<=100&&b>=-100))
    {
       printf("Invalid number values\n");
       return 0;
    }

    for (i=a; i<=b; i++)
    {
        printf("%d ",i*i);
    }

    return 0;
}
