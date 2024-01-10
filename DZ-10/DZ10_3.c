#include <stdio.h>

const int line_width = 1100;

int main(void)
{
char * input_fn = "./input3.txt";
char * output_fn = "./output3.txt";
char line[line_width];
char c;
int i;
FILE *fp;

    if((fp = fopen(input_fn, "r")) == NULL)
    {
        perror("Error occured while opening input file!");
        return 1;
    }

int count = 0;
    while((c = getc(fp)) != EOF)
        line[count++] = c;
    line[count] = '\0';

    c = line[count-1];
    fclose(fp);

    if((fp = fopen(output_fn, "w")) == NULL)
    {
        perror("Error occured while opening output file!");
        return 1;
    }

    for(i=0; i != count-1; i++)
    {
        if(line[i]==c)
            fprintf(fp, "%d ", i);
    }

    fclose(fp);
    return 0;
}
