#include <stdio.h>
int main(){
    int a,b;
    char b;
    scanf("%d %d %c",&a, &b ,&c);
    switch(c){
        case '+':
            printf("%d",a+b);
            break;
        case '-':
            printf("%d",a-b);
            break;
        case '*':
            printf("%d",a*b);
            break;
        case '/':
            printf("%f",a/b);
            break;
        default:
            break;
    }
}