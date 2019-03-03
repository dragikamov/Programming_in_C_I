/*
JTSK-320111
a5 p8.c
Dragi Kamov
dkamov@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

void printing(int mat[51][51],int a)
{
    int i,j;
    printf("The entered matrix is:\n");
    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}
void diagonal(int mat[51][51],int a)
{
    int i;
    printf("The main diagonal is:\n");
    for(i=0;i<a;i++)
    {
        printf("%d ",mat[i][i]);
    }
}
int main()
{
    int n,i,j,mat[51][51];
    scanf("%d", &n);
    getchar();
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d", &mat[i][j]);
            getchar();
        }
    }
    printing(mat,n);
    diagonal(mat,n);
    return 0;
}
