#include <stdio.h>

int main(void)
{
int number, temp, flag=0;
    printf("Enter integers separated by a space:");
cycl:
    number=getchar()-'0';

    while((number>=0)&&(number<=9))
    {
        if((flag==0)&&(number==0))
          {
                printf("\nEnd programm");
                return 0;
           }
         else if(flag==0)
            {
                temp=number;
                flag++;
             }
          else
        {
             temp=temp*10+number;
        }
        number=getchar()-'0';
        }

     if((number+'0')==' ')
     {
         flag=0;
         if((temp%2))
             printf("%d ", temp);
         goto cycl;
     }

     if(number==-38)
     {
         printf("To exit, enter the number 0\n");
         goto cycl;
     }

//    printf("\n%d ", temp);
//    printf("\n!!!!!");
    return 0;
}













/*
#include <stdio.h>

///void f_unit(int);

int main(void)
{
int number, temp, flag=0;
    printf("Enter a natural number:");

    while(!((number=getchar())=='0')&&(flag==0))
    {
        if((number==' ')&&(flag==1))
        {
            printf("%d ", temp);
            flag=0;
            continue;
        }
        if(number==' ')
        {
            printf("%c ", temp);
            flag=0;
        }
        if(flag==0)
        {
            temp=number;
            flag++;
        }
        else
            temp=temp*10+number;
    }
    printf("\n!!!!!");
    return 0;
}
*/
