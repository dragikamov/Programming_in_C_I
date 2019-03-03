/*
JTSK-320111
a6 p4.c
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
    int n,*array,i;
    scanf("%d", &n);
    getchar();
    array=(int*)malloc(sizeof(int)*n);
    if(array==NULL)
        exit(1);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
        getchar();
    }
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
    free(array);
    return 0;
}
