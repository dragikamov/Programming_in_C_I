/*
JTSK-320111
a5 p2.c
Dragi Kamov
dkamov@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
int length(char s[])
{
    int j;
    for (j = 0; s[j] != '\0'; ++j)
    {
    }
    return j-1;
}
int main()
{
    char line[200];
    fgets(line, sizeof(line),stdin);
    int x,i;
    x=length(line);
    for(i=0;i<x;i++)
    {
        int j;
        j=i;
        while(j>0)
        {
            printf(" ");
            j--;
        }
        printf("%c\n",line[i]);
    }
    return 0;
}
