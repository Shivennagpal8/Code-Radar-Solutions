// #include <stdio.h>

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

nt main() {
    char ch;

    scanf("%c", &ch);

    if(ch >='A' && ch<='Z'){
        printf("upper case");
    }
    else if (ch >= 'a' && ch<='z'){
        printf("lower case");
    }
    else{
        printf("not english letter");
    }


    /////if (ch >="a"&& )
    /////ch >= 97 and ch>= "a" is same this as it is its ascia value

    return 0;
}