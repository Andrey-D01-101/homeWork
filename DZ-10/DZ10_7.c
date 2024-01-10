#include <stdio.h>
#include <stdlib.h>

int num_char_file(char*);
void calc_letters(char*, int, int*, int*);
int printing_file(char*, int, int);

int main(void)
{
char * input_fn = "./input7.txt";
char * output_fn = "./output7.txt";
char ch;
int i, size, large_letters=0, small_letters=0;
char *ptr;
FILE *fp;

    size=num_char_file(input_fn);
    ptr=(char*)malloc(size);
     if(ptr)
    {
         if((fp = fopen(input_fn, "r")) == NULL)
         {
             perror("Error occured while opening input file!");
             return 1;
         }

         for(i=0; i<size; i++)
         {
             ch = getc(fp);
             *(ptr+i)=ch;
         }
         fclose(fp);
    }

    calc_letters(ptr, size, &large_letters, &small_letters);
    free(ptr);
    printing_file(output_fn, large_letters, small_letters);

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

void calc_letters(char* p, int size, int* llet, int* slet)
{
int i;
char ch;
      for(i=0; i<size; i++)
    {    ch=*(p+i);
        if(ch>='A'&&ch<='Z')
            (*llet)++;

        if(ch>='a'&&ch<='z')
            (*slet)++;
    }
}

int printing_file(char *filename, int llet, int slet)
{
FILE *fp;
    if((fp = fopen(filename, "w")) == NULL)
    {
        perror("Error occured while opening output file!");
        return 1;
    }
    fprintf(fp, "%d %d", slet, llet);

    fclose(fp);
    return 0;
}
