#include <stdio.h>
#include <locale.h>

int main(void)
{
int a;
//    setlocale(LC_ALL,"Rus");

    printf("Enter a positive integer:");
    scanf("%d", &a);

    a = a/100;
    if (a>=1&&a<10)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
