#include "person.h"

struct SchoolClass {
    struct Person students[26];
    char class_name;
    int class_number;
    struct Person class_leader;
};