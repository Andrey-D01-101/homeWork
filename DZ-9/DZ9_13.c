#include <stdio.h>

#define SIZE 1000

int isDigit(char);
int InputGet(int [][2], int);
int count_between(int, int, int, int [][2]);


int main(void)
{
int mas[SIZE][2], mas_size;
    mas_size=InputGet(mas, SIZE);
    printf("%d\n", count_between(mas[0][0], mas[1][0], mas_size, mas));

    return 0;
}


int isDigit(char c)
{
    return ((c>='0')&&(c<='9'));
}

int InputGet(int arr[][2], int n)
{
int i=0, number=0;
char c;
    while((c=getchar())!='\n')
    {
        if(isDigit(c))
        {
            do
            {
                number=number*10+c-'0';
                c=getchar();
            }
            while(isDigit(c));

            arr[i][1] = i;
            arr[i++][0] = number;

            if(c=='\n')
                break;
            if(c==' ')
                number=0;
        }
    }
    return i;
}

void print_element(int a[][2])
{
    printf("%d %d\n",a[0][1], a[1][1]);
}

int count_between(int from, int to, int size, int a[][2])
{
int i, x, x1, y;
    for(i=2; i<size; i++)
    {
        if(a[i][0]==from)
            x=a[i][1];
        if(a[i][0]==to)
            x1=a[i][1];
    }
    y=x1-x;
    if(y<0)
        y=-y;
    return y+1;
}
