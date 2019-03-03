/*
JTSK-320111
a5 p11.c
Dragi Kamov
dkamov@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
int count_char(char *str,char c)
{
    int i,n=0;
    for(i=0;i<=sizeof(str);i++)
    {
        if(str[i]==c)
        {
            n++;
        }
    }
    return n;
}
int main()
{
    int n,i;
    scanf("%d",&n);
    getchar();
    char *line;
    line=(char*)malloc(sizeof(char)*n);
    if(line==NULL)
        exit(1);
    for(i=0;i<n;i++)
    {
        scanf("%c",&line[i]);
    }
    printf("The character 'B' occurs %d times.\n",count_char(line,'B'));
    printf("The character 'p' occurs %d times.\n",count_char(line,'p'));
    printf("The character 'i' occurs %d times.\n",count_char(line,'i'));
    printf("The character 'D' occurs %d times.\n",count_char(line,'D'));
    printf("The character 'z' occurs %d times.\n",count_char(line,'z'));
    free(line);
    return 0;
}
