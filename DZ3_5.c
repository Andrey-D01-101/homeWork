#include <stdio.h>
#include <locale.h>


int main(void)
{
    int i, x[3];
    int a;
    setlocale(LC_ALL,"Rus");

    printf("Введите трехзначное целое число:");
    scanf("%d", &a);
    for (i = 0; a != 0; i++)
    {
        x[i] = a%10;
        a = a/10;
    }
    printf("\nПроизведение чисел  %d*%d*%d = %d\n", x[0], x[1], x[2], x[0]*x[1]*x[2]);
    return 0;
}
