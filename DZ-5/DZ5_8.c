#include <stdio.h>
#include <locale.h>

int main(void)
{
int a, count_digit, flag=0, x[10];
    printf("Enter an integer:");
    scanf("%d", &a);

    for (count_digit=0; a!=0; count_digit++)
    {
        x[count_digit]=a%10;
        a=a/10;
    }
    count_digit--;
    while(count_digit>=0)
    {
        if(x[count_digit]==9)
            flag++;
        count_digit--;
    }

    if(flag==1)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
