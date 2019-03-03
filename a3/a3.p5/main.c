/*
JTSK-320111
a3 p5.c
Dragi Kamov
dkamov@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i=1,mins=0;
    scanf("%d", &n);
    while(n<=0)
    {
        scanf("%d", &n);
    }
    for(i=1;i<=n;i++)
    {
        if(i==1)
        {
            printf("1 minute has 60 seconds.\n");
        }
        else
        {
            mins=i*60;
            printf("%d minutes have %d seconds.\n", i, mins);
        }
    }
    return 0;
}
