#include <stdio.h>
#include <locale.h>

int main(void)
{
    int a, b, c, summa;
    setlocale(LC_ALL,"Rus");

    printf("������� ��� ����� ����� ����� ������:");
    scanf("%d %d %d", &a, &b, &c);
    summa = a+b+c;
    printf("\n����� ���� ����� %d+%d+%d = %d\n", a, b, c, summa);
    return 0;
}
