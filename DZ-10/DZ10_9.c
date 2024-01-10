#include <stdio.h>
#include <stdlib.h>

int isDigit(char);
int get_char_file(char* , char* , int);
int num_char_file(char*);
char *arr_numbers;
int printing_file(char* , char*);
void str_not_spaces(char*);

int main(void)
{
char * input_fn = "./input9.txt";
char * output_fn = "./output9.txt";
int size, i, j;
char c, c1;

    size=num_char_file(input_fn);
    arr_numbers=(char*)malloc(size);
    get_char_file(input_fn, arr_numbers, size);

    for(i=0; i<size-1; i++)
    {
         c=arr_numbers[i];
         for(j=i+1; arr_numbers[j]!='\0'; j++)
         {
             c1=arr_numbers[j];
             if(c==c1)
                 arr_numbers[j]='-';
         }
         if(c==' ')
             arr_numbers[i]='-';
    }

    str_not_spaces(arr_numbers);
    printing_file(output_fn, arr_numbers);
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

int printing_file(char *filename, char *ptr)
{
int i;
FILE *fp;
    if((fp = fopen(filename, "w")) == NULL)
    {
        perror("Error occured while opening output file!");
        return 1;
    }
    for(i=0; ptr[i]!='\0'; i++)
        fprintf(fp, "%c", ptr[i]);

    fclose(fp);
    return 0;
}

int get_char_file(char* filename, char* ptr,  int size)
{
int i=0;
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
        *(ptr+i)=ch;
        i++;
    }
    *(ptr+i)='\0';
    fclose(fp);
    return 0;
}

void str_not_spaces(char *ptr)
{
int i=0, j, flag=0;
char ch;
    while((ch=ptr[i])!='\0')
    {
        for(j=i; ch=='-';)
        {
            flag=1;
            ch=ptr[++j];
        }

        if(flag==1)
        {
            if(ch=='\0')
            {
                ptr[i]='\0';
                break;
            }
            ptr[i]=ch;
            ptr[j]='-';
            flag=0;
        }
        i++;
    }
}
