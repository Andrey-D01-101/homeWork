#include <stdio.h>
#include <locale.h>

int main(void)
{
int a, b, c, max;
//    setlocale(LC_ALL,"Rus");
    printf("Enter three numbers:");
    scanf("%d %d %d", &a, &b, &c);

    max = a>b?(a>c?a:c):(b>c?b:c);
    printf("The largest number: %d\n", max);

    return 0;
}
