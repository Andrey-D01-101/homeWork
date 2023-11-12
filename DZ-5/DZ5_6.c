#include <stdio.h>
#include <locale.h>

int main(void)
{
int a, temp, temp1;

    printf("Enter an integer:");
    scanf("%d", &a);

    temp=a%10;
    for (;a>0;temp=temp1)
    {
        a/=10;
        temp1=a%10;
        if (temp == temp1){
            printf("YES\n");
            break;
        }
         if (a==0)
            break;
    }
     if (temp!=temp1)
        printf("NO\n");

    return 0;
}
