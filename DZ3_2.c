#include <stdio.h>
#include <locale.h>

int main(void)
{
    int  a, b, c;
    int  summa, mul;
    setlocale(LC_ALL,"Rus");

    printf("������� ��� ����� ����� ����� ������:");
    scanf("%d %d %d", &a, &b, &c);
    summa = a+b+c;
    printf("\n����� ���� ����� %d+%d+%d = %d\n", a, b, c, summa);
    mul = a*b*c;
    printf("\t\t\t\t������������ ���� ����� %d*%d*%d = %d\n", a, b, c, mul);
    return 0;
}
