#include <stdio.h>
#include <stdint.h>

uint64_t factorial (int);

int main(void)
{
int N;
    printf("Enter a positive integer no more than 20:");
    scanf("%d", &N);
    printf("\nFactorial of a natural number N! = %lld", factorial(N));

    return 0;
}

uint64_t factorial (int n)
{
uint64_t sum = 1, i;
    if((n==0)||(n==1))
        return 1;
    for(i=1; i<=n; i++)
        sum*=i;
    return sum;
}
