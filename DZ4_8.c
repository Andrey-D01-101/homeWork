#include <stdio.h>
#include <locale.h>

int main(void)
{
int a, b, c, d, e;
int temp_min, min;
//    setlocale(LC_ALL,"Rus");
    printf("Enter five integers:");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    temp_min = a<b?(a<c?a:c):(b<c?b:c);
    min = temp_min<d?(temp_min<e?temp_min:e):(d<e?d:e);
    printf("\nThe smallest number: %d\n", min);

    return 0;
}
