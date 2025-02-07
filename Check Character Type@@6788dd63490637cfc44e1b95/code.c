#include <stdio.h>

int main() {
    char ch;
    int num;
    scanf("%c%d", &ch,&num);
    
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("Vowel");
    } 
    else if(num == 1 || num ==2 || num == 3 || num == 4 || num == 5 || num == 6 || num == 6 || num == 7 || num == 8 || num == 9 || num == 0){
        printf("Digit")
    }
    else {
        printf("Special Character");
    }

    return 0;
}
