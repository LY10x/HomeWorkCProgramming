#ifndef QUADRATICROOTS_H
#define QUADRATICROOTS_H
#include <stdbool.h>
struct QuadraticRootsResult{
    double x1;
    double x2;
    int norealroots;
} ;

struct QuadraticRootsResult findroots(double a, double b, double c);

#endif  