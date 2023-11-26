#include <stdio.h>

void print_digits(int);

int main(void)
{
int number;
    printf("Enter a natural number:");
    scanf("%d", &number);
    if(number>0)
        print_digits(number);
    else
        printf("The entered number is not natural");

    return 0;
}

void print_digits(int n)
{
int temp;
    temp=n%10;
    n=n/10;
    if(n>0)
        print_digits(n);
    printf("%d ", temp);

    return;
}
