#include <stdio.h>

#define SIZE 1000

int isDigit(char);
int InputGet(int [], int);
int count_bigger_abs(int, int []);
void find_max_array(int, int []);
signed int mas[SIZE];

int main(void)
{
int mas_size;
    mas_size=InputGet(mas, SIZE);
    printf("%d",count_bigger_abs(mas_size, mas));

    return 0;
}

int isDigit(char c)
{
    return ((c>='0')&&(c<='9'));
}

int InputGet(int arr[], int n)
{
int flag=0;
int i=0, number=0;
char c;
    while((c=getchar())!='\n')
    {
        if(c=='-')
            flag=1;

        if(isDigit(c))
        {
            do
            {
                number=number*10+c-'0';
                c=getchar();
            }
            while(isDigit(c));

            if(flag)
            {
                arr[i++]=-number;
                flag=0;
            }
            else
                arr[i++]=number;

            if(c=='\n')
                break;
            if(c==' ')
                number=0;
        }
    }
    return i;
}

int count_bigger_abs(int n, int a[])
{
int i, count=0;
    find_max_array(n, a);
    for(i=0; i<n; i++)
    {
        if(a[i]<0)
        {
            a[i]=-a[i];
            a[i]>a[n-1]?count++:count;
        }
        else
            a[i]>a[n-1]?count++:count;
    }
    return count;
}

void find_max_array(int size, int a[])
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
}
