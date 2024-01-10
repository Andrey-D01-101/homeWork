#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct fio{
    char surname[30];
    char name[30];
    char patronymic[30];
}name;
int printing_file(char *, struct fio*);
int num_char_file(char* filename, struct fio *person)
{
int count=0, flag=0, word=0;
char ch, slovo[30];
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
                slovo[count]='\0';
                switch(word)
                {
                    case 0: strcpy(person->surname, slovo); break;
                    case 1: strcpy(person->name, slovo); break;
                    case 2: strcpy(person->patronymic, slovo); break;
                    default : break;
                }
                word++;
                count=0;
                flag=1;
             }
         }
        else
        {
            slovo[count]=ch;
            count++;
            flag=0;
        }
        ch = getc(fp);
    }
    if(flag!=1)
    {
        slovo[count]='\0';
        strcpy(person->patronymic, slovo);
        word++;
    }
    fclose(fp);
    return word;
}

int main(void)
{
char *input_fn = "./input14.txt";
char *output_fn = "./output14.txt";
struct fio *person = &name;

    num_char_file(input_fn, person);
    printing_file(output_fn, person);

    return 0;
}


int printing_file(char *filename, struct fio *pstr)
{
FILE *fp;
    if((fp = fopen(filename, "w")) == NULL)
    {
        perror("Error occured while opening output file!");
        return 1;
    }

     fprintf(fp, "%s, %s %s!\n", "Hello", pstr->name, pstr->surname);
    fclose(fp);
    return 0;
}
