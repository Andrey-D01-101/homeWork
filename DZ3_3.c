#include <stdio.h>
#include <locale.h>

int main(void)
{
    int a, b, dif;
    setlocale(LC_ALL,"Rus");

    printf("������� ��� ����� ����� ����� ������:");
    scanf("%d %d", &a, &b);
    dif = a-b;
    printf("\n�������� ���� ����� = %d\n", dif);
    return 0;
}
