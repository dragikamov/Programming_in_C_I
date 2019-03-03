/*
JTSK-320111
a3 p3.c
Dragi Kamov
dkamov@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    c=getchar();
    if(c>='a' && c<='z')
    {
        printf("Lowercase\n");
    }
    else if(c>='A' && c<='Z')
    {
        printf("Uppercase\n");
    }
    else
    {
        printf("ERROR 404!\n");
    }
    return 0;
}
