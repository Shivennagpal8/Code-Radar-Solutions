// // Your code here...
// #include<stdio.h>
// int main(){
//     int a,b;
//     scanf("%d",&a,&b);
//     if(a==b*b){
//         printf("Yes");
//     }
//     else{
//         printf("No");
//     }
// }


#include <stdio.h>

int main() {
    int a,b;
    scanf("%i %i",&a,&b);
    if(a==b*b)
        printf("Yes");
    else
        printf("No");
}