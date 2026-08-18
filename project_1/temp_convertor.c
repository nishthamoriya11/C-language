#include<stdio.h>
int main()
{
    int c , f ;
    printf("Enter temprature in celcious");
    scanf("%d",&c);
    
    f=(9/5*c)+32;
    printf("Temperature in ferenhit: %d", f);
    return 0;
}