#include <stdio.h>
#define SIZE 12

void CyclShift(int [], int);
void input(int [], int);

int main(void)
{
int mas[SIZE];

    input(mas, SIZE);
    CyclShift(mas, SIZE);

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
void CyclShift(int arr[], int n)
{
int temp, i, j;

    for(j=0; j<4; j++)
    {
        temp=arr[n-1];
        for(i=n-1; i>0; i--)
        {
            arr[i]=arr[i-1];
        }
    arr[0]=temp;
    }
}
