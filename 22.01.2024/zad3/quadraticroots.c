#include "quadraticroots.h"
#include <math.h>

struct QuadraticRootsResult findroots(double a, double b, double c) {
    struct QuadraticRootsResult result;
    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        result.x1 = (-b + sqrt(discriminant)) / (2 * a);
        result.x2 = (-b - sqrt(discriminant)) / (2 * a);
        result.norealroots = false;
    } else if (discriminant == 0) {
        result.x1 = -b / (2 * a);
        result.x2 = result.x1;
        result.norealroots = false;
    } else {
        result.norealroots = true;
    }

    return result;
}