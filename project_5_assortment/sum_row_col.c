#include<stdio.h>
int main(){
    int i, j, n, m, row, col, sum_row=0, sum_col=0;
    printf("enter row: ");
    scanf("%d",&m);
    printf("enter column: ");
    scanf("%d",&n);
    int arr[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("Enter the value at index [%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf(" %d \t",arr[i][j]);
            }
            printf("\n");
    }
    printf("Enter row of which you want sum:");
    scanf("%d",&row);
    for(j=0;j<n;j++){
        sum_row+=arr[row][j];
    }
    printf("sum of the row you entered: %d\n",sum_row);
    
    printf("Enter column of which you want sum: \n");
    scanf("%d",&col);
    for(i=0;i<m;i++){
        sum_col+=arr[i][col];
    }
    printf("sum of the column you entered: %d",sum_col);
    return 0;
}