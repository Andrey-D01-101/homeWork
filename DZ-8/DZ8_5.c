#include <stdio.h>
#define SIZE 10

int sumpositiv(int [], int);
void input(int [], int);

int main(void)
{
int mas[SIZE];
    input(mas, SIZE);
    printf("%d\n", sumpositiv(mas, SIZE));

    return 0;
}

void input(int arr[], int number_of_elements)
{
int i;
    printf("Enter integers:");
    for(i=0; i<number_of_elements; i++)
        scanf("%d", &arr[i]);
}

int sumpositiv(int arr[], int number_of_elements)
{
int i, sum=0;

    for(i=0; i<number_of_elements; i++)
    {
        if(arr[i]>0)
            sum+=arr[i];
    }
     return sum;
}
