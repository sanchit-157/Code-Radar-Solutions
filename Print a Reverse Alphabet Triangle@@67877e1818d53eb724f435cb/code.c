#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(char i='A'+a-1;i>='A';i--){
        printf("%c ",i);
        printf("\n");
    }
}