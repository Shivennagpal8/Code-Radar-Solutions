#include <stdio.h>

int main() {
    int a;
    int LSB=a&1;
    scanf("%d%d", &a,&LSB);
    printf("%d", LSB);
    return 0;
}