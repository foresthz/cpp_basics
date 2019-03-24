
#include "hello.h"

// ok with or without extern declaration
// extern int sum(int, int);

int sum(int a, int b) {
    printf("sum of %d+%d is: %d", a, b, a+b);
    return 0;
}


