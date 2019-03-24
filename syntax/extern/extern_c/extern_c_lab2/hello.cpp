

#include <iostream>
#include "hello.h"
using namespace std;

extern "C" {
    int sum(int, int);
}

int main() {
    sum(3,5);
    return 0;
}
