#include <stdio.h>

#define SIZE 1000

int isDigit(char);
int InputGet(int [], int);
int find_max_array(int size, int a[]);
void MissingNumber(int [], int);
int mas[SIZE];

int main(void)
{
int N;
    N=InputGet(mas, SIZE);
    find_max_array(N, mas);
    MissingNumber(mas, N);

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
    while((c=getchar())!='0')
    {
        if(isDigit(c))
        {
            do
            {
                number=number*10+c-'0';
                c=getchar();
            }
            while(isDigit(c));

            arr[i++]=number;
            if(c=='0')
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

void MissingNumber(int s[], int size)
{
int i=0;
    do
    {
        if((s[i+1]-s[i])!=1)
            printf("%d\n", s[i+1]-1);
        i++;
    }while(i<size-1);
}
