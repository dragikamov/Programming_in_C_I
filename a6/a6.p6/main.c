/*
JTSK-320111
a6 p6.c
Dragi Kamov
dkamov@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
int rec(int a,int b)
{
    int sum=b;
    if(b==a)
    {
        return b;
    }
    else
    {
        return sum+rec(a,b+1);
    }
}
int main()
{
    int x,y,s;
    scanf("%d %d", &x, &y);
    if(y>x)
    {
        s=rec(y,x);
    }
    else
    {
        s=rec(x,y);
    }
    printf("%d",s);
    return 0;
}
