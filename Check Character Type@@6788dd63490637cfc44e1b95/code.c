#include <stdio.h>
#include<ctype.h>
int main(){
    char a;
   
    if(isalpha(a)){
        a=tolower(a);
        if(a=='a'||a=='e'||a=='i'||a=='o'||a='u'){
            printf("Vowel");
        }else{
            printf("Constant");
        }
    }else{
        printf("Special Character");
    }
}