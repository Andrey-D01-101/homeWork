#include <stdio.h>
#include <locale.h>

int main(void)
{
    int i, x[3];
    int a, max;
//    setlocale(LC_ALL,"Rus");

    printf("Enter a three-digit integer:");
    scanf("%d", &a);

    if (a<=0)
        printf("Entered a number less than or equal to zero");
    else
    {
    for (i = 0; a != 0; i++)
    {
        x[i] = a%10;
        a = a/10;
    }
    max = x[0]>x[1]?(x[0]>x[2]?x[0]:x[2]):(x[1]>x[2]?x[1]:x[2]);
    printf("Maximum digit: %d\n", max);
    }
    return 0;
}
