#include <stdio.h>

#define SIZE 1000

int isDigit(char);
int InputGet(int [][2], int);
void find_max_array(int size, int a[][2]);
void print_element(int [][2]);


int main(void)
{
int mas[SIZE][2], mas_size;
    mas_size=InputGet(mas, SIZE);
    find_max_array(mas_size, mas);
    print_element(mas);

    return 0;
}


int isDigit(char c)
{
    return ((c>='0')&&(c<='9'));
}

int InputGet(int arr[][2], int n)
{
int i=0, number=0;
char c;
    while((c=getchar())!='\n')
    {
        if(isDigit(c))
        {
            do
            {
                number=number*10+c-'0';
                c=getchar();
            }
            while(isDigit(c));

            arr[i][1] = i;
            arr[i++][0] = number;

            if(c=='\n')
                break;
            if(c==' ')
                number=0;
        }
    }
    return i;
}

void find_max_array(int size, int a[][2])
{
int i, j, temp0, temp1;

    for(i=0; i<size-1; i++)
    {
        for(j=0; j<size-1; j++)
        {
            if(a[j][0]>a[j+1][0])
            {
                temp0=a[j][0];
                temp1=a[j][1];
                a[j][0]=a[j+1][0];
                a[j][1]=a[j+1][1];
                a[j+1][0]=temp0;
                a[j+1][1]=temp1;
            }
        }
     }
}

void print_element(int a[][2])
{
    printf("%d %d\n",a[0][1], a[1][1]);
}

