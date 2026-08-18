#include<stdio.h>
int main(){
    int i, j, k;
    printf("\n");
    for(i=1;i<=5;i++){
        for(k=5;k>i;k--){
            printf("  ");
        }
        for(j=6-i;j<=5;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}