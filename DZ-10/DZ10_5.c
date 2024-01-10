#include <stdio.h>

int read_file_array(char*, char*, int);
int printing_file(char*,char*, int);


int main(void)
{
const int line_width = 100;
char * input_fn = "./input5.txt";
char * output_fn = "./output5.txt";
char line[line_width];
char ch;
int i, size=0;


    size=read_file_array(input_fn, line, line_width);

    for(i=0; i<size; i++)
    {
        ch=line[i];
        switch (ch)
        {
            case 'a': line[i]='A'; break;
            case 'b': line[i]='B'; break;
            case 'A': line[i]='a'; break;
            case 'B': line[i]='b'; break;
            default: break;
        }
    }

    printing_file(output_fn, line, size);
    return 0;
}

int read_file_array(char *filename, char *mas, int size)
{
int count = 0;
char c;
FILE *fp;

    if((fp = fopen(filename, "r")) == NULL)
    {
        perror("Error occured while opening input file!");
        return 1;
    }

    while((c = getc(fp)) != EOF)
    {
        mas[count++] = c;
        if(count==size)
            break;
    }
    mas[count] = '\0';
    fclose(fp);
    return count;
}

int printing_file(char *filename, char *mas, int size)
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
        fprintf(fp, "%c", mas[i]);
    }

    fclose(fp);
    return 0;
}
