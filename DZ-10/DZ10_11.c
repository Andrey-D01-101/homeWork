#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int printing_file(char* , int);
int mas_word[1000];
struct w{
    char mas_read_words[100];
    int id;
};
int num_char_file(char* ,int*, struct w*);


int main(void)
{
char *input_fn = "./input11.txt";
char *output_fn = "./output11.txt";
char word[100];
int size=0, i, n, flag=0;
struct w words[1000];

    size=num_char_file(input_fn, mas_word, words);

    for(i=0; i<size; i++)
    {
        strcpy(word, words[i].mas_read_words);
        n=words[i].id;
        if(word[n-1]=='a')
             flag++;
    }
    printing_file(output_fn, flag);

    return 0;
}

int num_char_file(char* filename, int* ptr, struct w *masstr)
{
int i=0, count=0, flag=0, word=0;
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
                masstr[word].id=count;
                word++;
                ptr[i++]=count;
                count=0;
                flag=1;
             }
         }
        else
        {
            masstr[word].mas_read_words[count]=ch;
            count++;
            flag=0;
        }
        ch = getc(fp);
    }
    if(flag!=1)
    {
        masstr[word].id=count;
        word++;
        ptr[i++]=count;
        ptr[i]='\0';
    }
    fclose(fp);
    return word;
}

int printing_file(char *filename, int num)
{
FILE *fp;
    if((fp = fopen(filename, "w")) == NULL)
    {
        perror("Error occured while opening output file!");
        return 1;
    }
    fprintf(fp, "%d", num);
    fclose(fp);
    return 0;
}
