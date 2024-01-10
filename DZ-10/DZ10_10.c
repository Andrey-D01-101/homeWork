#include <stdio.h>
#include <stdlib.h>

int printing_file(char* , char*);
void sort(int , int *);
int mas_word[1000];
struct w{
    char mas_read_words[100];
    int id;
};
int num_char_file(char* , struct w*, int*);


int main(void)
{
char *input_fn = "./input10.txt";
char *output_fn = "./output10.txt";
char *max_word;
int size=0, i, max, flag;
struct w words[1000];

    size=num_char_file(input_fn, words, mas_word);
    sort(size, mas_word);

    if(mas_word[size-1]==mas_word[size-2])
    {
        printf("Warning of maximum words more than one\n");
        return 0;
    }

    max=mas_word[size-1];
    flag=1;
    i=0;
    do
    {
        if(max==words[i].id)
        {
            max=words[i].id;
            flag=0;
        }
        if(flag!=0)
            i++;
    }while(flag);

    max_word=words[i].mas_read_words;
    printing_file(output_fn, max_word);

    return 0;
}

int num_char_file(char* filename, struct w *masstr, int *ptr)
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

int printing_file(char *filename, char *ptr)
{
FILE *fp;
    if((fp = fopen(filename, "w")) == NULL)
    {
        perror("Error occured while opening output file!");
        return 1;
    }
    fprintf(fp, "%s", ptr);
    fclose(fp);
    return 0;
}

void sort(int size, int *a)
{
int i, j, temp;

    for(i=0; i<size; i++)
    {
        for(j=0; j<size-1; j++)
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
