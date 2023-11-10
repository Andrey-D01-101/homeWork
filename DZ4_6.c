#include <stdio.h>
#include <locale.h>

int main(void)
{
int a, b;
//    setlocale(LC_ALL,"Rus");
    printf("Enter two integers:");
    scanf("%d %d", &a, &b);

    if (a>b)
        printf("Above\n");
    else if (a<b)
        printf("Less\n");
    else
        printf("Equal\n");

    return 0;
}
