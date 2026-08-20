#include<stdio.h>
main(){
    int i, j, n, m;
    printf("Enter row: ");
    scanf("%d",&m);
    printf("Enter cloumn: ");
    scanf("%d",&n);
    
    int arr[m][n], trans[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("Enter element at index [%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("matrix: \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf(" %d \t",arr[i][j]);
            }
            printf("\n");
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            trans[j][i]=arr[i][j];
        }
    }
    printf("Transpose of the matrix: \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d \t",trans[i][j]);
        }
        printf("\n");
    }
}
