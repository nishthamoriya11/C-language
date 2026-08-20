#include<stdio.h>
main(){
    int i, j, arr[10], n, max;
    printf("enter size of array: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("enter valueat index [%d]: ",i);
        scanf("%d",&arr[i]);
    }
     max=arr[0];
    for(i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("Largest number: %d",max);
}