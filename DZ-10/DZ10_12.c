#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct w{
    char mas_read_words[100];
    int id;
};
int printing_file(char* , struct w*, int);
int mas_word[1000];

int num_char_file(char* filename, struct w *ptr)
{
int count=0, flag=0, word=0;
char ch;
FILE *fp;

    if((fp = fopen(filename, "r")) == NULL)
    {
        perror("Error occured while opening input file!");
        return 1;
    }
    while((ch=getc(fp))==' ');

    while(ch!=EOF)
    {
        if(ch==' ')
        {
            if(flag==0)
            {
                ptr[word].id=count;
                word++;
                count=0;
                flag=1;
             }
         }
        else
        {
            ptr[word].mas_read_words[count]=ch;
            count++;
            flag=0;
        }
        ch = getc(fp);
    }
    if(flag!=1)
    {
        ptr[word].id=count;
        word++;
    }
    fclose(fp);
    return word;
}

int main(void)
{
char *input_fn = "./input12.txt";
char *output_fn = "./output12.txt";
int size=0;
struct w words[1000];

    size=num_char_file(input_fn, words);
    printing_file(output_fn, words, size);

    return 0;
}

int printing_file(char *filename, struct w *ptr ,int size)
{
int i;
FILE *fp;
    if((fp = fopen(filename, "w")) == NULL)
    {
        perror("Error occured while opening output file!");
        return 1;
    }

    for(i=0; i<size; i++)
    {
        fprintf(fp, "%s", ptr[i].mas_read_words);
        if(i<size-1)
            fprintf(fp, "%c", '\n');
    }
    fclose(fp);
    return 0;
}
