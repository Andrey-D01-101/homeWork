#include <stdio.h>
#include <locale.h>

void fmore (int a, int b);

int main(void)
{
int a, b;
//    setlocale(LC_ALL,"Rus");
    printf("Enter two numbers:");
    scanf("%d %d", &a, &b);
    if (!(a-b))
        printf("Two identical numbers are entered\n");
    else
        fmore(a, b);

    return 0;
}

void fmore (int a, int b)
{
    if (a > b)
        printf("Numbers in ascending order: %d %d\n", b, a);
    else
        printf("Numbers in ascending order: %d %d\n", a, b);
}
