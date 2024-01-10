#include <stdio.h>
#include <stdlib.h>

int isDigit(char);
int get_num_file(char* , int* , int);
int num_char_file(char*);
void sort(int , int*);
int *arr_numbers;
int printing_file(char* , int* , int);

int main(void)
{
char * input_fn = "./input8.txt";
char * output_fn = "./output8.txt";
int size, cnt;

    size=num_char_file(input_fn);
    arr_numbers=(int*)malloc(size*sizeof(int));
    cnt=get_num_file(input_fn, arr_numbers, size);
    sort(cnt, arr_numbers);
    printing_file(output_fn, arr_numbers, cnt);
    free(arr_numbers);

    return 0;
}

int num_char_file(char* filename)
{
int count = 0;
char ch;
FILE *fp;

    if((fp = fopen(filename, "r")) == NULL)
    {
        perror("Error occured while opening input file!");
        return 1;
    }

    while((ch = getc(fp)) != EOF)
    {
        count++;
    }
    fclose(fp);
    return count;
}

int printing_file(char *filename, int *ptr, int size)
{
int i;
FILE *fp;
    if((fp = fopen(filename, "w")) == NULL)
    {
        perror("Error occured while opening output file!");
        return 1;
    }
    for(i=0; i<size; i++)
        fprintf(fp, "%d ", *(ptr+i));

    fclose(fp);
    return 0;
}

int isDigit(char c)
{
    return ((c>='0')&&(c<='9'));
}

int get_num_file(char* filename, int* p,  int size)
{
int i=0, number=0, cnt=0;
char ch;
FILE *fp;

    if((fp = fopen(filename, "r")) == NULL)
    {
        perror("Error occured while opening input file!");
        return 1;
    }

    while(i<size)
    {
        ch = getc(fp);
        i++;//
        if(isDigit(ch))
        {
            do
            {
                number=number*10+ch-'0';
                ch=getc(fp);
                i++;
            }
            while(isDigit(ch));

            *(p+cnt)=number;
            number=0;
            cnt++;
        }
    }
    fclose(fp);
    return cnt;
}

void sort(int size, int *a)
{
int i, j, temp;

    for(i=0; i<size; i++)
    {
        for(j=0; j<size; j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1] ;
                a[j+1]=temp;
            }
        }
     }
}
