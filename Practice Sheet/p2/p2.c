/*
JTSK-320111
p2.c
Dragi Kamov
dkamov@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

void itobs(unsigned int no, char *str)
{
    char tmp[32];
    strcpy(tmp, "");
    if(no == 0)
    {
        strcat(str, "0");
        return;
    }
    while(no > 0)
    {
        if(no % 2)
        {
            strcat(tmp, "1");
        }
        else
        {
            strcat(tmp, "0");
        }
        no /= 2;
    }
    for(int i = strlen(tmp) - 1; i >= 0; i--)
    {
        char ch[2];
        strcpy(ch, "");
        ch[0] = tmp[i];
        strcat(str, ch);
    }
}

int main()
{
    while(1)
    {
        unsigned int no;
        scanf("%d", &no);
        getchar();
        char str[32];
        itobs(no, str);
        printf("%s\n", str);
        strcpy(str, "");
    }

    return 0;
}
