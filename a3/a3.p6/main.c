/*
JTSK-320111
a3 p6.c
Dragi Kamov
dkamov@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char line[200],ch;
    int n;
    fgets(line, sizeof(line),stdin);
    sscanf(line, "%c %d", &ch, &n);
    while(n<=0)
    {
        scanf("%d", &n);
    }
    while(n>0)
    {
        printf("%c ", ch);
        n--;
    }
    return 0;
}
