#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=0;i<=a;i++){
        for(int j=0;i<=a;j++){
            if(i==0||i==a-1||j==0||j==i-1){
                printf("*");
            }else{
                printf("");
            }
        }
    }
}