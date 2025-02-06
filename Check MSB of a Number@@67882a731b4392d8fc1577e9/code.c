#include <stdio.h>

int main() {
    int num = 42;
    int msb = 0;

    while (num > 0) {
        msb = num & 1;
        num >>= 1; // Right shift to check the next bit
    }
    if(msb==1){
        printf("Set");
    }
    else{
        printf("Not set");
    }
    return 0;
}