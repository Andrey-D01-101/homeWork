#include <stdio.h>
#include <locale.h>

int main(void)
{
int n, i;
    printf("Enter N integer:");
    scanf("%d", &n);

    for (i=1; i<=n; i++)
        printf("N%d\n", i);

    return 0;
}
