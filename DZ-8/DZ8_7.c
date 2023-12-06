#include <stdio.h>
#define SIZE 10

void inver(int [], int, int);
void input(int [], int);

int main(void)
{
int mas[SIZE];
int index1, index2;
    input(mas, SIZE);
    index1=0;
    index2=SIZE/2;
    inver(mas, index1, index2-1);
    index1=SIZE/2;
    index2=SIZE;
    inver(mas, index1, index2-1);

    for(int i=0; i<SIZE; i++)
        printf("%d ", mas[i]);

    return 0;
}

void input(int arr[], int number_of_elements)
{
int i;
    printf("Enter 10 integers:");
    for(i=0; i<number_of_elements; i++)
        scanf("%d", &arr[i]);
}
void inver(int arr[], int i1, int i2)
{
int temp;

    for(i1; i1!=i2; i1++, i2--)
    {   temp=arr[i2];
        arr[i2]=arr[i1];
        arr[i1]=temp;
    }
}
