/*
JTSK-320111
a4 p5.c
Dragi Kamov
dkamov@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
int the_sum(int array[],int ij)
{
    int s=0;
    while(ij>0)
    {
        s+=array[ij];
        ij--;
    }
    return s;
}
double the_average(int array[],int ij)
{
    int s=0,n;
    n=ij;
    while(ij>0)
    {
        s+=array[ij];
        ij--;
    }
    s/=n;
    return s;
}
int main()
{
    int arr[10],i=1,sum;
    double ave;
    while(i<=8)
    {
        scanf("%d",&arr[i]);
        if(arr[i]==(-99))
        {
            arr[i]=0;
            break;
        }
        i++;
    }
    i--;
    sum=the_sum(arr,i);
    ave=the_average(arr,i);
    printf("%d\n",sum);
    printf("%.2f",ave);
    return 0;
}
