#include <stdio.h>
#include <locale.h>

int f_max(int, int mas[]);
int f_min(int i, int mas[]);
void copyArray(int *src, int *dest, int size) {
for (int i = 0; i < size; i++) {
    dest[i] = src[i];
  }
}

int x[10], destArray[10];

int main(void)
{
int a, i, max, min;
    printf("Enter integer number: ");
    scanf("%d", &a);

    for (i = 0; a != 0; i++)
    {
        x[i] = a%10;
        a = a/10;
    }
    i--;

     copyArray(x, destArray, 10);
     max = f_max(i, destArray);

     copyArray(x, destArray, 10);
     min = f_min(i, destArray);
     printf("max = %d", max);
     printf("\nmin = %d", min);
    return 0;
}
int f_max(int i, int mas[])
{
    int c, max;
    for (c=i; c>0; c--)
    {
        max = mas[c]>mas[c-1]?mas[c]:mas[c-1];
        mas[c-1]=max;
    }
    return max;
}

int f_min(int i, int mas[])
{
    int c, min;
    for (c=i; c>0; c--)
    {
        min = mas[c]<mas[c-1]?mas[c]:mas[c-1];
        mas[c-1]=min;
    }
    return min;
}
