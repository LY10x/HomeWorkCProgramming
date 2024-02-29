#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a,b;
    printf("A=");
    scanf("%lf",&a);
    printf("B=");
    scanf("%lf",&b);

    double * p1 = &a;
    double * p2 = &b;

    printf("%p  |  %p\n", &p1,&p2);
    
    printf("%lf  |  %lf", p1,p2);
    return 0;
}