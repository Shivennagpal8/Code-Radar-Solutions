#include <stdio.h>

int main() {
    int num = 42;
    int msb = 0;

    while (num > 0) {
        msb = num & 1;
        num >>= 1; // Right shift to check the next bit
    }

    printf(" Set");
    return 0;
}