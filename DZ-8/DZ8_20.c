#include <stdio.h>
#define SIZE 100

void sort(int [], int);

int main(void)
{
char mas[SIZE]={0};
int mas_num[SIZE]={0};
int i=0, N;

    scanf("%[0-9]", mas);

    while(mas[i]!='\0')
    {
        mas_num[i]=(int)(mas[i]-'0');
        i++;
    }
    N=--i;
    sort(mas_num, SIZE);
      for(i=0; i<=N; i++)
        printf("%d", mas_num[SIZE-i-1]);

    return 0;
}

void sort(int arr[], int n)
{
int temp, i, j;

    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-1-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }

        }

    }
}

