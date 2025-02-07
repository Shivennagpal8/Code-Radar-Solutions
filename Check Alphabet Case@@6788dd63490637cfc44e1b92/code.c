#include <stdio.h>

// int main() {
//     char ch;
//     scanf("%c", &b);
//     if (('A'<=ch)&&(ch<='Z')){
//         printf("Uppercase");
//     }
//     else if(('a'<=ch)&&(ch<='z')){
//         printf("Lowercase");
//     }
//     else{
//         printf("Not an alphabet");
//     }
//     return 0;
// }

int main() {
    char ch;

    scanf("%c", &ch);

    if(ch >='A' && ch<='Z'){
        printf("Uppercase");
    }
    else if (ch >= 'a' && ch<='z'){
        printf("Lowercase");
    }
    else{
        printf("Not english letter");
    }


    /////if (ch >="a"&& )
    /////ch >= 97 and ch>= "a" is same this as it is its ascia value

    return 0;
}