#include <stdio.h>

#define SIZE 1000

void sort_even_odd(int, int []);
int isDigit(char);
int InputGet(int [], int);

int main(void)
{
int mas[SIZE], N, i;
    N=InputGet(mas, SIZE);
    sort_even_odd(N, mas);
    for(i=0; i<N; i++)
        printf("%d ", mas[i]);

    return 0;
}

void sort_even_odd(int n, int a[])
{
int i, cnt_even=0, cnt_odd=0;
int arr[n];

    for(i=0; i<n; i++)
    {
        if(a[i]%2==0)
        {
            arr[cnt_even]=a[i];
            cnt_even++;
        }
    }

    for(i=0; i<n; i++)
    {
        if(a[i]%2!=0)
        {
            arr[cnt_even+cnt_odd]=a[i];
            cnt_odd++;
        }
    }

    for(i=0; i<n; i++)
        a[i]=arr[i];
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
