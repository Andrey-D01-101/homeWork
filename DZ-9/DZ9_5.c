#include <stdio.h>

#define SIZE 1000

int isDigit(char);
int InputGet(int [], int);
int find_max_array(int size, int a[]);

int main(void)
{
int mas[SIZE], mas_size;
    mas_size=InputGet(mas, SIZE);
    printf("%d", find_max_array(mas_size, mas));

    return 0;
}


int isDigit(char c)
{
    return ((c>='0')&&(c<='9'));
}

int InputGet(int arr[], int n)
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
            arr[i++] = number;
            if(c=='\n')
                break;
            if(c==' ')
                number=0;
        }
    }
    return i;
}

int find_max_array(int size, int a[])
{
int i, j, temp;

    for(i=0; i<size-1; i++)
    {
        for(j=0; j<size-1; j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1] ;
                a[j+1]=temp;
            }
        }
     }
 return a[size-1];
}
