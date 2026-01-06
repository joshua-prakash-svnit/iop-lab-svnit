#include<stdio.h>

int main()
{
    FILE *fp;
    char ch;
    int characters=0, words =0 , lines=0;

    fp = fopen("Sample.txt", "r");

    while((ch = fgetc(fp)) != EOF)
    {
        putc(ch,fp);
        characters++;

        if(ch == ' ' || ch == ',' || ch == '.')
        {
        ++words;
        }

        if(ch == '.'|| ch == '\n')
        {
        lines++;
        }
    }

    fclose(fp);

    printf("%d %d %d", characters, words, lines);
}
