/*
JTSK-320111
a6 p10.c
Dragi Kamov
dkamov@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *text;
    FILE *copy;
    text=fopen("text.txt","r");
    copy=fopen("text_copy.txt","w");
    if(text==NULL)
    {
        printf("Error 404!\n");
        exit(1);
    }
    if(copy==NULL)
    {
        printf("Error 404!\n");
        exit(1);
    }
    char line[256];
    char line_copy[256];
    while(fgets(line,sizeof(line),text)!=NULL)
    {
        strcpy(line_copy,line);
        fprintf(copy, line_copy);
//        fprintf(copy, "\n");
    }
    fclose(copy);
    fclose(text);
    return 0;
}
