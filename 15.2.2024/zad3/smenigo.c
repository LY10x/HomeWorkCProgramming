#include <stdio.h>
#include <stdlib.h>

void swap(void *p1, void *p2){
    int a = *(int *)p1;
    int b = *(int *)p2;

    a = a+b;
    b = a-b;
    a = a-b;

    p1 = &a;
    p2 = &b;
}

int main()
{
    int c = 3, d = 5;
    swap(&c,&d);

    printf("%d,%d",c,d);
    return 0;
}