#include <stdio.h>
#include <locale.h>

int main(void)
{
int a, b, c, d, e;
int temp_max, temp_min, max, min;
//    setlocale(LC_ALL,"Rus");
    printf("Enter five integers:");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    temp_max = a>b?(a>c?a:c):(b>c?b:c);
    max = temp_max>d?(temp_max>e?temp_max:e):(d>e?d:e);

    temp_min = a<b?(a<c?a:c):(b<c?b:c);
    min = temp_min<d?(temp_min<e?temp_min:e):(d<e?d:e);

    printf("\nSum of minimum and maximum number: %d\n", max+min);

    return 0;
}
