/*
JTSK-320111
a3 p9.c
Dragi Kamov
dkamov@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char line[200],ch;
    int n,i;
    float arr[51],result=1,sum=0;
    fgets(line, sizeof(line),stdin);
    sscanf(line, "%c %d", &ch, &n);
    for(i=1; i<=n; i++)
    {
        scanf("%f", &arr[i]);
        getchar();
        sum+=arr[i];
        result*=arr[i];
    }
    switch(ch)
    {
    case 's':
        printf("%f", sum);
        break;
    case 'p':
        printf("%f", result);
        break;
    default:
        result=sum/n;
        printf("%f", result);
        break;
    }
    return 0;
}
