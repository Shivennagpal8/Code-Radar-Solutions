// Your code here...
// Your code here...
#include<stdio.h>
int main(){
    int a,i;
    scanf("%d", &a);
    for(i=1;i<=a;i++){
        printf("%d X %d = %d", a,i,(a*i));
    }
    return 0;
}