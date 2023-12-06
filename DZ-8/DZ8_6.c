#include <stdio.h>
#define SIZE 12

float ArithMean(int [], int);
void input(int [], int);

int main(void)
{
int mas[SIZE];
    input(mas, SIZE);
    printf("%.2f\n", ArithMean(mas, SIZE));

    return 0;
}

void input(int arr[], int number_of_elements)
{
int i;
    printf("Enter integers:");
    for(i=0; i<number_of_elements; i++)
        scanf("%d", &arr[i]);
}

float ArithMean(int arr[], int number_of_elements)
{
int i;
float sum=0;

    for(i=0; i<number_of_elements; i++)
    {
        sum+=arr[i];
    }
     return sum/i;
}
