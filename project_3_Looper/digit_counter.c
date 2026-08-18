#include<stdio.h>
int main(){
    long int n , counter=0;
    printf("Enter n: ");
    scanf("%ld",&n);
    while (n!=0)
    {
        n=n/10;
        counter=counter+1;
    }
    printf("%d",counter);
    return 0;
}