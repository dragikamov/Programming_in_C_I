/*
JTSK-320111
a5 p6.c
Dragi Kamov
dkamov@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
double maxdiff(double arr[], int n)
{
    int i;
    double min=999999.9,max=0.0;
    for(i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max-min;
}
int main()
{
    int n,i;
    double *array,diff;
    scanf("%d", &n);
    getchar();
    array=(double*)malloc(sizeof(double)*n);
    if(array==NULL)
        exit(1);
    for(i=0;i<n;i++)
    {
        scanf("%lf", &array[i]);
        getchar();
    }
    diff=maxdiff(array,n);
    printf("%lf",diff);
    free(array);
    return 0;
}
