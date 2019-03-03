/*
JTSK-320111
a3 p7.c
Dragi Kamov
dkamov@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char line[200],ch,newch;
    int n,i;
    fgets(line, sizeof(line),stdin);
    sscanf(line, "%c %d", &ch, &n);
    for(i=0;i<=n;i++)
    {
        newch=ch+i;
        printf("%c ",newch);
    }
    return 0;
}
