#include <stdio.h>

#define DEB_pr(var) \
    printf("Variable: %s, Value: %d, File: %s, Line: %d\n", #var, (var), __FILE__, __LINE__)

int main() {
    int Var = 52;
    DEB_pr(Var);

    return 0;
}
