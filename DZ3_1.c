#include <stdio.h>
#include <locale.h>

int main(void)
{
    int a, b, c, summa;
    setlocale(LC_ALL,"Rus");

    printf("¬ведите три целых числа через пробел:");
    scanf("%d %d %d", &a, &b, &c);
    summa = a+b+c;
    printf("\n—умма трех числе %d+%d+%d = %d\n", a, b, c, summa);
    return 0;
}
