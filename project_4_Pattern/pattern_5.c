#include<stdio.h>
int main(){
    int i, k, j;
    for(i=1;i<=5;i++){
        int c=4;
        for(k=5;k>i;k--){
            printf("  ");
        }
        for(j=6-i;j<=5;j++){
            printf("%d ",j);
        }
        for(j=2;j<=i;j++){
            
            printf("%d ",c);
            c--;
        }
        printf("\n");
    }
    return 0;
}