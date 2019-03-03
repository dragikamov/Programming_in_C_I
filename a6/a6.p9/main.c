/*
JTSK-320111
a6 p9.c
Dragi Kamov
dkamov@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char line1[200],line2[200];
    int n,m;
    scanf("%s", &line1);
    scanf("%s", &line2);
    FILE *one;
    one=fopen(&line1, "r");
    if(one==NULL)
    {
        printf("Error 404!\n");
        exit(1);
    }
    fscanf(one,"%d",&n);
    fclose(one);
    FILE *two;
    two=fopen(&line2, "r");
    if(two==NULL)
    {
        printf("Error 404!\n");
        exit(1);
    }
    fscanf(two,"%d",&m);
    fclose(two);
    FILE *sum;
    sum=fopen("sum.txt", "w");
    if(sum==NULL)
    {
        printf("Error 404!\n");
        exit(1);
    }
    fprintf(sum,"%d",n+m);
    fclose(sum);
    return 0;
}
