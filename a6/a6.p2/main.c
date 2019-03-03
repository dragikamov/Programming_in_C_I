/*
JTSK-320111
a6 p2.c
Dragi Kamov
dkamov@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
void triple(int arr[], int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        arr[i]*=3;
    }
}
int main()
{
    int n=6,array[6]={3,2,9,3,7,12},i;
    for(i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
    printf("\nChanged:\n");
    triple(array,n);
    for(i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}
