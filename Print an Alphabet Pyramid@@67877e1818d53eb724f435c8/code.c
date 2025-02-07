#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(char i='A';i<'A'+a;i++){
        printf("%c ",i);
        printf("\n");
    }
}