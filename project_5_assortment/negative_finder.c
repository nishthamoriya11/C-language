#include<stdio.h>
main(){
    int arr[20], n, i;
    printf("Enter array size: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter value at index [%d]: ",i);
        scanf("%d",&arr[i]);
    }
    printf("negative elments of the array: ");
    for(i=0;i<n;i++){
        if(arr[i]<0){
            printf("%d ",arr[i]);
        }
    }
}
