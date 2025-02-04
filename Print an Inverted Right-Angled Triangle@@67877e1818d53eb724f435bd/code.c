#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    char b='*';
    for(int i=a;i>0;i--){
        printf("%c",b*i);
    }
}