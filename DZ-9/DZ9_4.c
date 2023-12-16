#include <stdio.h>

#define SIZE 1000

void print_digit(char []);
int isDigit(char);
void InputGet(char [], int);

int main(void)
{
char mas[SIZE];
    InputGet(mas, SIZE);
    print_digit(mas);

    return 0;
}

int isDigit(char c)
{
    return ((c>='0')&&(c<='9'));
}

void InputGet(char arr[], int n)
{
int i=0;
char c;
    while((c=getchar())!='\n')
    {
        if(isDigit(c))
        {
            do
            {
                arr[i++]=c;
                c=getchar();
            }
            while(isDigit(c));
            if(c=='\n')
            {
                arr[i]='\0';
                break;
            }
        }
    }
}

void print_digit(char s[])
{
int digit[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int i;
    for(i=0; s[i]!='\0'; i++)
    {
        digit[s[i]-'0']++;
    }
    for(i=0; i<10; i++)
        if(digit[i])
            printf("%d %d ", i, digit[i]);
}

