#include <stdio.h>
#include <locale.h>

int main(void)
{
    int a, b, dif;
    setlocale(LC_ALL,"Rus");

    printf("Введите два целых числа через пробел:");
    scanf("%d %d", &a, &b);
    dif = a-b;
    printf("\nРазность двух чисел = %d\n", dif);
    return 0;
}
