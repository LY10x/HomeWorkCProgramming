#include <stdio.h>

int strlenght(char * str)
{
    int len = 0;
    for(char * a = str; *a != '\0'; a++)
    {
        len++;
    }
    return len;

}

void strhalf(char *arr, char **pp)
{
    int len = strlenght(arr);

    *pp = arr+(len/2);
}

int main()
{
    char arr[] = "nikoziq";

    char *p = NULL;

    strhalf(arr, &p); 

    printf("%s", p);

    return 0;
}