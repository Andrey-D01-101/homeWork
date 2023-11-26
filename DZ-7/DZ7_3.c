#include <stdio.h>

void reverse(int);

int main(void)
{
int a;
    printf("Enter integer:");
    scanf("%d", &a);
    reverse(a);

    return 0;
}
void reverse(int x)
{
int temp;
    temp=x%10;
    x=x/10;
    if(x>0)
    {
        printf("%d ", temp);
        reverse(x);
    }
    else
        printf("%d ", temp);
}
