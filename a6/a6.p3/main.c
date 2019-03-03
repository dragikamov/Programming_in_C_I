/*
JTSK-320111
a6 p3.c
Dragi Kamov
dkamov@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
int count_upper(char *str)
{
    int n=0;
    char *i;
    for(i=str;*i!='\0';i++)
    {
        if(*i>='A' && *i<='Z')
        {
            n++;
        }
    }
    return n;
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
        n=count_upper(line);
        printf("%d\n",n);
    }
    return 0;
}
