#include <stdio.h>
#define SIZE 10


int main(void)
{
char mas[SIZE]={0};
int i=0;

    scanf("%[0-9]", mas);

    while(mas[i]!='\0')
    {
        printf("%c ", mas[i]);
        i++;
    }


    return 0;
}

