#include <stdio.h>
#include <locale.h>

int main(void)
{
int x1, y1, x2, y2;
float k, b;
//    setlocale(LC_ALL,"Rus");
    printf("\tEnter coordinates x1 y1 x2 y2: ");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    k = ((float)y2 - y1)/(x2 - x1);
    b = y1 - (k*x1);
    printf("\nThe angular coefficient k and the number b: %.2f %.2f\n", k, b);
    return 0;
}
