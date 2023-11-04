#include <stdio.h>
#include <locale.h>

int main(void)
{
    float a, b, c, arith;
    setlocale(LC_ALL,"Rus");

    printf("¬ведите три целых числа через пробел:");
    scanf("%f %f %f", &a, &b, &c);
    arith = (a+b+c)/3;
    printf("\n—реднее арифметическое равно = %.2f\n", arith = (a+b+c)/3);
    return 0;
}
