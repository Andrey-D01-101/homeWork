#include <stdio.h>

int acounter(void);

int main(void)
{
    printf("Enter the line:");
    printf("%d ", acounter());

    return 0;
}

int acounter(void)
{
int count_a=0;
int ch;
    ch=getchar();
    if(ch=='.')
        return count_a;
    if(ch==10)
    {
        printf("\nThere is no dot in this line ");
    }
    if(ch=='a')
    {
        count_a++;
        return count_a+acounter();
    }
    return count_a+acounter();
}
