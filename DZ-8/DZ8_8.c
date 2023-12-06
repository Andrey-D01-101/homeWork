#include <stdio.h>
#define SIZE 12

void inver(int [],int, int);
void input(int [], int);

int main(void)
{
int mas[SIZE];
int index1, index2;
    input(mas, SIZE);
    index1=0;
    index2=SIZE;
    inver(mas, index1, index2);

    for(int i=0; i<SIZE; i++)
        printf("%d ", mas[i]);

    return 0;
}

void inver(int arr[], int i1, int i2)
{
int temp;
static int flag=0;

    if((flag==0)&&(i2==SIZE))
    {
        i1=0;
        i2=(SIZE/3)-1;
    }
    else if((flag==0)&&(i1==(SIZE/6)))
    {
        i1=SIZE/3;
        i2=(SIZE*2/3)-1;
    }
    else if((flag==0)&&(i1==(SIZE/2)))
    {
        i1=SIZE*2/3;
        i2=SIZE-1;
        flag=1;
    }
    else
        return;

    for(i1; i1<i2; i1++, i2--)
    {   temp=arr[i2];
        arr[i2]=arr[i1];
        arr[i1]=temp;
    }
    inver(arr, i1, i2);
}
void input(int arr[], int number_of_elements)
{
int i;
    printf("Enter 10 integers:");
    for(i=0; i<number_of_elements; i++)
        scanf("%d", &arr[i]);
}
