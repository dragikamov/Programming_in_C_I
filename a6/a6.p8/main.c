/*
JTSK-320111
a6 p8.c
Dragi Kamov
dkamov@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    FILE *ch;
    ch=fopen("char.txt", "r");
    if(ch==NULL)
    {
        printf("Error 404!\n");
        exit(1);
    }
    c=getc(ch);
    fclose(ch);
    FILE *num;
    num=fopen("code.txt", "a");
    if(num==NULL)
    {
        printf("Error 404!\n");
        exit(1);
    }
    fprintf(num,"%d",c);
    fclose(num);
    return 0;
}
