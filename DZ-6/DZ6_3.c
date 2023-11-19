#include <stdio.h>
#include <locale.h>

float middle(int a, int b);


int main(void)
{
int a, b;
    printf("Enter two integers:");
    scanf("%d %d", &a, &b);
    printf("Arithmetic mean: %.2f", middle(a, b));

    return 0;
}

float middle(int a, int b)
{
    float temp;
    return temp = (a+b)/2.;
}
