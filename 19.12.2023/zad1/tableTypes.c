#include <stdio.h>
#include <limits.h>


int main() {
    printf("%-12s %-8s %-8s %-12s %-12s %-8s %-12s\n", "Type", "Format", "Size", "Max Value", "Min Value", "Format", "Max Value");
    
    printf("%-12s %-8s %-8zu %-12d %-12d %-8s %-12u\n", "int", "%d", sizeof(int), INT_MAX, INT_MIN, "%u", UINT_MAX);
    printf("%-12s %-8s %-8zu %-12d %-12d %-8s %-12u\n", "short", "%d", sizeof(short), SHRT_MAX, SHRT_MIN, "%u", USHRT_MAX);

    printf("%-12s %-8s %-8zu %-12ld %-12ld %-8s %-12lu\n", "long", "%ld", sizeof(long), LONG_MAX, LONG_MIN, "%lu", ULONG_MAX);
    printf("%-12s %-8s %-8zu %-12lld %-12lld %-8s %-12llu\n", "long long", "%lld", sizeof(long long), LLONG_MAX, LLONG_MIN, "%llu", ULLONG_MAX);
    

    return 0;
}
