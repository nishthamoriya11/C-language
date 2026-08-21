#include<stdio.h>
int sum(int x, int y){
    return x+y;
}
int sub(int x, int y){
    return x-y;
}
int multi(int x, int y){
    return x*y;
}
int div(int x, int y){
    return x/y;
}
int mod(int x, int y){
    return x%
    y;
}
main(){
int a, b, choice;
printf("Enter first num: ");
scanf("%d",&a);
printf("Enter second num: ");
scanf("%d",&b);

printf("Enter 1 for addition \n");
printf("Enter 2 for sybtraction \n");
printf("Enter 3 for multiplication \n");
printf("Enter 4 for division \n");
printf("Enter 5 for modulous \n");
printf("Enter 6 to end program \n");

printf("Enter your choice: ");
scanf("%d",&choice);

    switch(choice){
        case 1:
            printf("Addition of %d and %d= %d\n", a,b,sum(a,b));
            break;
        case 2:
            printf("Subtraction of %d and %d= %d\n", a,b,sub(a,b));
            break;
        case 3:
            printf("multiplication of %d and %d= %d\n", a,b,multi(a,b));
            break;
        case 4:
            printf("Division of %d and %d= %d\n", a,b,div(a,b));
            break;
        case 5:
            printf("modulous of %d and %d= %d\n", a,b,mod(a,b));
            break;
        default:
            printf("Enter valid choice\n");
        
    }
}