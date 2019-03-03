/*
JTSK-320111
a5 p3.c
Dragi Kamov
dkamov@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
int highest(int arr[],int n)
{
    int i,max=0;
    for(i=1;i<=n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}
int lowest(int arr[],int n)
{
    int i,min=999999;
    for(i=1;i<=n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    return min;
}
int sum(int arr[],int n)
{
    int i,result=0;
    for(i=1;i<=n;i++)
    {
        result+=arr[i];
    }
    return result;
}
int elem(int arr[])
{
    int i=1;
    while(i<=10)
    {
        if(arr[i]==0)
        {
            break;
        }
        i++;
    }
    i--;
    return i;
}
double harmonic_mean(int arr[],int num)
{
    int hsum=0,i;
    for(i=1;i<num;i++)
    {
        hsum+=(1/arr[i]);
    }
    return num/hsum;
}
int main()
{
    int array[15],i=1;
    printf("Enter the array:\n");
    while(i<=10)
    {
        scanf("%d",&array[i]);
        getchar();
        if(array[i]<0)
        {
            array[i]=0;
            break;
        }
        i++;
    }
    i--;
    char c;
    printf("Enter the character:\n");
    scanf("%c",&c);
    double hmean;
    int high,add,elements,low;
    switch(c)
    {
    case 'm':
        hmean=harmonic_mean(array,i);
        printf("%lf",hmean);
        break;
    case 'h':
        high=highest(array,i);
        printf("%d", high);
        break;
    case 'l':
        low=lowest(array,i);
        printf("%d", low);
        break;
    case 's':
        add=sum(array,i);
        printf("%d", add);
        break;
    case 'n':
        elements=elem(array);
        printf("%d",elements);
        break;
    default:
        printf("ERROR 404!");
        break;
    }
    return 0;
}
