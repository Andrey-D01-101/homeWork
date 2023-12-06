#include <stdio.h>
#define SIZE 5

float arif_mean(int [], int);

int main(void)
{
int i, mas[SIZE];
    printf("Enter integers:");
    for(i=0; i<SIZE; i++)
        scanf("%d", &mas[i]);

    printf("%.3f\n", arif_mean(mas, SIZE));

    return 0;
}

float arif_mean(int arr[], int number_of_elements)
{
int i;
float sum=0.;
    for(i=0; i<number_of_elements; i++)
        sum+=arr[i];
    return sum/=i;
}
