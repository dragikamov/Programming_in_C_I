/*
JTSK-320111
a6 p5.c
Dragi Kamov
dkamov@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n,i;
    double vector[200],v=0,max=0,min=999999.9;
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++)
    {
        scanf("%lf", &vector[i]);
        getchar();
        vector[i]=abs(vector[i]);
        v+=(vector[i]*vector[i]);
        if(vector[i]>max)
        {
            max=vector[i];
        }
        if(vector[i]<min)
        {
            min=vector[i];
        }
    }
    v=sqrt(v);
    printf("The norm of the vector is: %lf\n",v);
    printf("The minimum value is: %lf\n",min);
    printf("The maximum value is: %lf\n",max);
    return 0;
}
