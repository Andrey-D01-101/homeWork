#include <stdio.h>

const int line_width = 120;
void word_sort(char [], int);
void char_search(char [], char []);
char * output_fn = "./output4.txt";
FILE *fp;

int main(void)
{
char * input_fn = "./input4.txt";
char first_word[line_width], second_word[line_width];
char c;
int flag=0;
int cnt_first=0, cnt_second=0;

    if((fp = fopen(input_fn, "r")) == NULL)
    {
        perror("Error occured while opening input file!");
        return 1;
    }

    while((c = getc(fp)) != EOF)
    {
        if(c==' ')
        {
            flag=1;
            first_word[cnt_first]='\0';
            continue;
        }
        if(flag)
            second_word[cnt_second++]=c;
        else
            first_word[cnt_first++]=c;
    }
    second_word[cnt_second] = '\0';
    fclose(fp);
    word_sort(first_word, cnt_first-1);
    word_sort(second_word, cnt_second-1);

    if((fp = fopen(output_fn, "w")) == NULL)
    {
        perror("Error occured while opening output file!");
        return 1;
    }
    char_search(first_word, second_word);
    fclose(fp);

    return 0;
}

void word_sort(char mas[], int size)
{
int i, j, cnt=0, flag=0;
char c;
    for(i=0; i<size; i++)
    {
        c=mas[i];
        for(j=i+1; j<=size; j++)
        {
            if((mas[i]==mas[j])&&(mas[i]!=' '))
            {
                flag++;
                mas[j]=' ';
            }
        }
        if(c!=' ')
        {
            if(flag!=0)
                mas[i]=' ';
            else
                mas[cnt++]=c;
        }
        if((flag==0)&&(i==size-1))
            mas[cnt++]=mas[size];
        flag=0;
    }
    mas[cnt]='\0';
}

void char_search(char word1[], char word2[])
{
int i=0, j;
    while(word1[i]!='\0')
    {
        for(j=0; word2[j]!=0; j++)
        {
            if(word1[i]==word2[j])
                fprintf(fp, "%c ", word1[i]);
        }
        i++;
    }
}
