#include <stdio.h>
#include<ctype.h>
int main(){
    char a;
    scanf("%c", &a);
    if(isalpha(a)){
        a=tolower(a);
        else{
            printf("Constant");
        }
    }else{
        printf("Special Character");
    }
}