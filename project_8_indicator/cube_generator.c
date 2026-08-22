#include<stdio.h>
int cube(int *ptr){
    return (*ptr)*(*ptr)*(*ptr);
}
main(){
    int i, j, row, col, *ptr1;
    int arr[10][10];
    printf("Enter row: ");
    scanf("%d",&row);
    printf("Enter column: ");
    scanf("%d",&col);

    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("enter element at [%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
            ptr1=&arr[i][j];
        }
    }
      for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("%d \t", arr[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("%d \t", cube(&arr[i][j]));
        }
        printf("\n");
    }
}