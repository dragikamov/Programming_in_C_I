/*
JTSK-320111
a5 p7.c
Dragi Kamov
dkamov@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
void mini(float arr[], int n)
{
    int i;
    float min1=999999.9,min2=999999.9;
    for(i=0;i<n;i++)
    {
        if(arr[i]<min1)
        {
            min2=min1;
            min1=arr[i];
            arr[i]=999999.9;
        }
        if(arr[i]<min2)
        {
            min2=arr[i];
        }
    }
    printf("%f %f",min1,min2);
}
int main()
{
    int n,i;
    float *array;
    scanf("%d", &n);
    getchar();
    array=(float*)malloc(sizeof(float)*n);
    if(array==NULL)
        exit(1);
    for(i=0;i<n;i++)
    {
        scanf("%f", &array[i]);
        getchar();
    }
    mini(array,n);
    free(array);
    return 0;
}
