#include <stdio.h>

void f_unit(int);

int main(void)
{
int number;
    printf("Enter a natural number:");
    scanf("%d", &number);
    f_unit(number);

    return 0;
}
void f_unit(int a)
{
int len, flag, i;
    len = sizeof(a)*8;
    for(i=0; i<len; i++)
    {
        if(((a>>i)&1)==1)
            flag++;
    }
    printf("%d", flag);
}
