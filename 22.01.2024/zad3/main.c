#include "quadraticroots.h"
#include <stdio.h>

int main() {

    struct QuadraticRootsResult result1 = findroots(15, 6, -1);
     if(result1.norealroots)
    {
        printf("for the int test: no real roots");
    }else {
    printf("Result for int arguments: x1 = %f, x2 = %f, norealroots = %d\n",
           result1.x1, result1.x2, result1.norealroots);
    }
    
    struct QuadraticRootsResult result2 = findroots(6.5, 3.47, 7);
    if(result2.norealroots)
    {
        printf("for the float test: no real roots");
    }else {
    printf("Result for float arguments: x1 = %f, x2 = %f, norealroots = %d\n",
           result2.x1, result2.x2, result2.norealroots);
    }

    return 0;
}
