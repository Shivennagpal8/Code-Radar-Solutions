#include <stdio.h>

int main() {
    int a;
    scanf("%d%d", &a);
    int LSB= a & 1;
    printf("%d", LSB);
    return 0;
}