#include <stdio.h>
#include <stdint.h>

uint64_t func(int);
void func1(int);
int mas[21]={0};

int main(void)
{
int n;
    printf("Enter integer:");
    scanf("%d", &n);
    if((n<1)||(n>68))
    {
        printf("ERROR!!!");
        return 0;
    }

    if(n<=64)
        printf("\n%llu", func(n));
    else
        func1(n);
    return 0;
}

uint64_t func(int n)
{
int i;
uint64_t sum = 2;
    if (n==1)
        return 1;

     for(i=1; i<n-1; i++)
        sum*=2;

    return sum;
}

void func1 (int n)
{
uint64_t temp;
char flag = 0, t = 0;
int c = n - 64, i;

    temp = func(64);
    for(i=0; i<=63; i++)
    {
        mas[i]=temp%10;
        temp/=10;
    }

    do
    {
        c=c-1;
        for(i=0; i<=20; i++)
        {
            t =(mas[i]*2)+flag;
            mas[i]=t%10;
            if(t>=10)
                flag = 1;
            else
                flag = 0;
        }
    }
    while(c);
    printf("\n");

    if(mas[20]==0)
        for (i=19; i>=0; i--)
            printf("%d", mas[i]);
    else
        for (i=20; i>=0; i--)
            printf("%d", mas[i]);
}
