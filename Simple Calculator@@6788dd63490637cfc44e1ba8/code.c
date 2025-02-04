#include <stdio.h>
int main(){
    int a,b;
    char c;
    scanf("%d %d %c",&a, &b ,&c);
    if(c=='+'){
        printf("%d",a+b);
    }else if(c=='-'){
        printf("%d",a-b);
    }else if(c=='*'){
        printf("%d",a*b);
    }else if(c=='/'){
        if(c!=0){
            printf("%.0f",(float)a/b);
        }else{
            printf("Error");
        }
    }else{
        printf("Error");
    }
}