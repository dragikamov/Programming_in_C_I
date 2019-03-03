/*
JTSK-320111
a4 p6.c
Dragi Kamov
dkamov@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
int posmin(int v[], int n)
{
    int j,min=999999,min_pos;
    for(j=0;j<n;j++)
    {
        if(v[j]<min)
        {
            min_pos=j;
            min=v[j];
        }
    }
    return min_pos;
}
int main()
{
    int x,arr[51],i,y;
    scanf("%d", &x);
    for(i=0;i<x;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<x;i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    y=posmin(arr,x);
    printf("%d",y);
    return 0;
}
