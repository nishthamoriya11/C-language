#include<stdio.h>
int main()
{
    int hra, da, ta, BS;
    float gross, HRA, DA, TA;
    printf("Enter your Base salary: ");
    scanf("%d",&BS);
    printf("\nEnter your HRA: ");
    scanf("%d",&hra);
    printf("\nEnter your DA: ");
    scanf("%d",&da);
    printf("\nEnter your TA: ");
    scanf("%d",&ta);

    HRA=(BS*hra)/100;
    DA=(BS*da)/100;
    TA=(BS*ta)/100;
    gross=BS+HRA+DA+TA;

    printf("Gross salary=%0.3f",gross);
    return 0;
}