#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter First angle: ");
    scanf("%d",&a);
    printf("Enter Second angle: ");
    scanf("%d",&b);
    
    c= 360-(a+b);

    printf("Third angle: %d", c);
    return 0;
}