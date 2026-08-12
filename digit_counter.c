#include<stdio.h>
main(){
    long long int n , counter=0;
    printf("Enter n: ");
    scanf("%lld",&n);
    while (n!=0)
    {
        n=n/10;
        counter=counter+1;
    }
    printf("%d",counter);
}