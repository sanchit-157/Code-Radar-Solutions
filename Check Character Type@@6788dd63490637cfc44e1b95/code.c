#include <stdio.h>
int main(){
    char a;
    scanf("%c",&a);
    if((a=='A'||a=='E'||a=='I'||a=='O'||a=='U'||a=='a')||(a=='e'||a=='i'||a=='o'||a='u')){
        printf("Vowel");
    }else if((a>='A'&&a<='Z')||(a>='a'&&a<='z')){
        printf("Constant");
    }else{
        printf("Special Character");
    }
}