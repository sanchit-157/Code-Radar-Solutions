#include <stdio.h>
#include<ctype.h>
int main(){
    char a;
    scanf("%c",&a);
    if(ischaracter(a)){
        if(isupper(a)){
            printf("Uppercase");
        }else{
            printf("Lowercase");
        }
    }else{
        printf("Not an alphabet");
    }
}