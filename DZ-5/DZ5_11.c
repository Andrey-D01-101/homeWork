#include <stdio.h>
#include <locale.h>

int main(void)
{
int a, i, x[8];
    printf("Enter integer number: ");
    scanf("%d", &a);

    for (i = 0; a != 0; i++)
    {
        x[i] = a%10;
        a = a/10;
    }
    i--;
    printf("\nNumber: ");
    for (a=0; a<=i; a++)
    {
        printf("%d", x[a]);
    }
    return 0;
}
