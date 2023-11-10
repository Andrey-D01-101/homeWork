#include <stdio.h>
#include <locale.h>

int main(void)
{
int a, b, c, flag;
//    setlocale(LC_ALL,"Rus");
    printf("Enter three integers, the sides of the triangle:");
    scanf("%d %d %d", &a, &b, &c);

    flag = a+b>c?(a+c>b?(b+c>a?1:0):0):0;
    if (flag)
        printf("\nYES");
    else
        printf("\nNO");

    return 0;
}
