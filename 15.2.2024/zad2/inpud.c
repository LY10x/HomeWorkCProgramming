#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NUM
int main()
{
    char a[255];
    fgets(a,255,stdin);
    char *p = strchr(a,'\n');
    printf("a: %s!",a);
    if(p != NULL){
        *p = '\0';
    }

    printf("a: %s!\n",a);
    return 0;
}