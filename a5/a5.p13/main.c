/*
JTSK-320111
a5 p13.c
Dragi Kamov
dkamov@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
void mixcase(char *str)
{
    int i;
    for(i=0;str[i]!='\0';i++)
    {
        if(isupper(str[i]))
        {
            str[i]=tolower(str[i]);
        }
        else if(islower(str[i]))
        {
            str[i]=toupper(str[i]);
        }
    }
    printf("%s",str);
}
int main()
{
    char line[200];
    while(1)
    {
        fgets(line,sizeof(line),stdin);
        if(strcmp(line,"exit\n")==0)
        {
            break;
        }
        mixcase(line);
    }
    return 0;
}
