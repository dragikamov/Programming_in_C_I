/*
JTSK-320111
a4 p8.c
Dragi Kamov
dkamov@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int length(char s[])
{
    int j;
    for (j = 0; s[j] != '\0'; ++j)
    {
    }
    return j-1;
}
int main()
{
    char line1[101],line2[101],line3[101];
    int ret;
    fgets(line1, sizeof(line1),stdin);
    fgets(line2, sizeof(line2),stdin);
    int n,m;
    n=length(line1);
    m=length(line2);
    printf("The length of line1: %d\nThe length of line2: %d\n",n,m);
    strcpy(line3, line1);
    printf("Copy of line1 in line3: %s",line3);
    strcat(line1,line2);
    printf("Concatenated:%s",line1);
    ret=strcmp(line3,line2);
    if(ret < 0)
    {
        printf("line1 is less than line2");
    }
    else if(ret > 0)
    {
        printf("line2 is less than line1");
    }
    else
    {
        printf("line1 is equal to line2");
    }
    printf("\nEnter a character to search:\n");
    char c;
    int i;
    scanf("%c",&c);
    for(i=0;i<n-1;i++)
    {
        if(line3[i]==c)
        {
            printf("The location of c is on the %d position.",i);
            break;
        }
    }
    return 0;
}
