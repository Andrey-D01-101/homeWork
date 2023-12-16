#include <stdio.h>

#define SIZE 1000

int isDigit(char);
int InputGet(int [], int);
void swap_negmax_last(int, int []);
int find_max_array(int, int []);
signed int mas[SIZE];

int main(void)
{
int mas_size, i;
    mas_size=InputGet(mas, SIZE);
    swap_negmax_last(mas_size, mas);
    for(i=0; i<mas_size; i++)
        printf("%d ", mas[i]);
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

void swap_negmax_last(int size, int a[])
{
signed int neg_number[size], num, temp;
int i, j=0, index;
    for(i=0; i<size; i++)
    {
        if(a[i]<0)
        {
            neg_number[j]=a[i];
            j++;
        }
    }
    num=find_max_array(j, neg_number);
    for(i=0; i<size; i++)
    {
        if(a[i]==num)
        {
            index=i;
            break;
        }
    }
    temp=a[size-1];
    a[size-1]=num;
    a[index]=temp;
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

