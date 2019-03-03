/*
JTSK-320111
a4 p4.c
Dragi Kamov
dkamov@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
void print_frame(int n, int m, char c)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i==0 || i==n-1)
            {
                printf("%c", c);
            }
            else if(j==0 || j==m-1)
            {
                printf("%c", c);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
int main()
{
    int x,y;
    char ch;
    scanf("%d %d %c",&x, &y, &ch);
    print_frame(x,y,ch);
    return 0;
}
