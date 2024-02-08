#ifndef TRANSFORMATION_H
#define TRANSFORMATION_H

#define ERROR_MSG_SIZE 100

typedef struct {
    long result;
    char error[ERROR_MSG_SIZE];
} Transformation;

Transformation transformStringToNumber(const char *input);

#endif 
