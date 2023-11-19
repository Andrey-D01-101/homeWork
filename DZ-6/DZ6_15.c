#include <stdio.h>

int grow_up(int number);

int main ()
{
int N;
    printf("Enter an integer: ");
    scanf("%d", &N);
    if (grow_up(N)==0)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}


int grow_up(int number)
{
int flag = 0, temp, i, mas[20]={0};

    for(i=0; number>0; i++)
    {
        temp=number%10;
        mas[i]=temp;
        number/=10;
    }
      i--;
    for(;i>0; i--)
    {
        if(mas[i]<mas[i-1])
            continue;
        else {
            flag = 1;
            break;
        }
    }
     return flag;
}
