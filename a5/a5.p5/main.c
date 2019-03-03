/*
JTSK-320111
a5 p5.c
Dragi Kamov
dkamov@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
int count_consonants(char *str)
{
    int n=0;
    char *i;
    for(i=str;*i!='\0';i++)
    {
        if(*i!='a' && *i!='e' && *i!='i' &&
            *i!='o' && *i!='u' && *i!='A' &&
            *i!='E' && *i!='I' && *i!='O' && *i!='U' && *i!=' ')
        {
            n++;
        }
    }
    return n-1;
}
int main()
{
    int j=1,n;
    char line[200];
    while(j==1)
    {
        fgets(line,sizeof(line),stdin);
        if(line[0]=='\n')
        {
            break;
        }
        n=count_consonants(line);
        printf("%d\n",n);
    }
    return 0;
}
