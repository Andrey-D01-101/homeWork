#include <stdio.h>
#define SIZE 5

int MinElement(int [], int);
void input(int [], int);

int main(void)
{
int mas[SIZE];
    input(mas, SIZE);
    printf("%d\n", MinElement(mas, SIZE));

    return 0;
}

void input(int arr[], int number_of_elements)
{
int i;
    printf("Enter integers:");
    for(i=0; i<number_of_elements; i++)
        scanf("%d", &arr[i]);
}

int MinElement(int arr[], int number_of_elements)
{
int i, j, temp;

    for(i=0; i<number_of_elements-1; i++)
    {
        for(j=0; j<number_of_elements-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1] ;
                arr[j+1]=temp;
            }
        }
     }
     return arr[0];
}
