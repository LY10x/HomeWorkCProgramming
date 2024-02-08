#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int largest_a(char *a,int n)
{
    char max = 'A';
    for (int i = 0; i < n; i++)
            if (a[i] > max)
                max = a[i];
        return max;
}

int main()
{
    char stri[20];
    gets(stri);
    char result ;
    int arrlen = strlen(stri);
    result = largest_a(stri,arrlen);
    printf("%c",result);
    return 0;
}
