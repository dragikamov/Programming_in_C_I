/*
JTSK-320111
a3 p8.c
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
    if(n>32)
    {
        printf("Too big number.");
        return 1;
    }
    for(i=0;i<=n;i++)
    {
        newch=ch+i;
        if(newch>'Z' || newch<'A')
        {
            printf("\nOut of alphabet.");
            return 1;
        }
        printf("%c ",newch);
    }
    return 0;
}
