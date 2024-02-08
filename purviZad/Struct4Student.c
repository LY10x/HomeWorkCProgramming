#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Struct4Student
{
    char name[20];
    int num;
    float avg;
};


int main()
{
    struct Struct4Student student1;
    strcpy(student1.name, "Ivan Petrov");
    student1.num = 18;
    student1.avg = 5.6;
    
    printf("%s\n",student1.name);
    printf("%d\n",student1.num);
    printf("%.2f\n",student1.avg);
    return 0;
}
