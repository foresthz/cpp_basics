
#include "hello.h"

// ok with or without extern declaration
extern int sum(int, int);
int main() {
    sum(2,3);
    return 0;
}