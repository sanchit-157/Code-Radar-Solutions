#include <stdio.h>
int main(){
    int a,b;
    char c;
    scanf("%d %d %c",&a, &b ,&c);
    int d=(float)a/b;
    if(c=='+'){
        printf("%d",a+b);
    }else if(c=='-'){
        printf("%d",a-b);
    }else if(c=='*'){
        printf("%d",a*b);
    }else if(c=='/'){
        printf("%d",d);
    }else{
        printf("Error");
    }
}