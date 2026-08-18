#include<stdio.h>
main(){
    int n, last_digit, sum;
    printf("Enter n: ");
    scanf("%d",&n);
    last_digit=n%10;

    while(n>10){
        n=n/10;
    }
    sum=last_digit+n;
    printf("Addition of first and last digit= %d", sum);
}