#include <stdio.h>

enum Weekday {
    MONDAY = 1,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY,
};

int main() {

    int a = 0;
    printf("Day as a num: ");
    scanf("%d",&a);

    enum Weekday dayInput = a;

    switch (dayInput) {
        case MONDAY:
            printf("MON");
            break;
        case TUESDAY:
            printf("TUE");
            break;
        case WEDNESDAY:
            printf("WED");
            break;
        case THURSDAY:
            printf("THU");
            break;
        case FRIDAY:
            printf("FRI");
            break;
        case SATURDAY:
            printf("SAT");
            break;
        case SUNDAY:
            printf("SUN");
            break;
        default:
            printf("Invalid workday\n");
            break;
    }

    return 0;
}