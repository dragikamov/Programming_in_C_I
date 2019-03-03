/*
JTSK-320111
a6 p1.c
Dragi Kamov
dkamov@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
void printing(char c,int n,int m)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%c ",c);
        }
        printf("\n");
    }
}
int main()
{
    int r,c;
    char ch;
    scanf("%c %d %d", &ch, &r, &c);
    printing(ch,r,c);
    return 0;
}
