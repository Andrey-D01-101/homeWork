#include <stdio.h>

void print_num(int);

int main(void)
{
int a;
    printf("Enter integer:");
    scanf("%d", &a);
    print_num(a);

    return 0;
}
void print_num(int num)
{
int temp;
    temp=num%10;
    num/=10;
    if(num>0)
        print_num(num);
    printf("%d ", temp);
}
