/*
JTSK-320111
a5 p4.c
Dragi Kamov
dkamov@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
int count_consonants(char str[])
{
    int i,n=0;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]!='a' && str[i]!='e' && str[i]!='i' &&
            str[i]!='o' && str[i]!='u' && str[i]!='A' &&
            str[i]!='E' && str[i]!='I' && str[i]!='O' && str[i]!='U' && str[i]!=' ')
        {
            n++;
        }
    }
    return n-1;
}
int main()
{
    int i=1,n;
    char line[200];
    while(i==1)
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
