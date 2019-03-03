/*
JTSK-320111
a5 p12.c
Dragi Kamov
dkamov@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void my_replace(char *str, char c, char e)
{
    int i;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==c)
        {
            str[i]=e;
        }
    }
    printf("%s",str);
}
int main()
{
    char line[200],line2[200],c,e;
    while(1)
    {
        fgets(line,sizeof(line),stdin);
        if(strcmp(line,"quit\n")==0)
        {
            break;
        }
        fgets(line2,sizeof(line2),stdin);
        sscanf(line2, "%c %c", &c,&e);
        my_replace(line,c,e);
    }
    return 0;
}
