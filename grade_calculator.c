#include<stdio.h>
int main()
{
    int mark;
    char grade;
    printf("Enter your marks out of 100: ");
    scanf("%d",&mark);
    grade=(100>=mark && mark>=85)?'A':
                (mark>=70)?'B':
                (mark>=60)?'C':
                (mark>=45)?'D':'E';
    printf("Your grade: %c\n", grade);

    switch(grade){
        case 'A':
            printf("Excellent Work !");
            break;
        case 'B':
            printf("Well done");
            break;
        case 'C':
            printf("Good Job");
            break;
        case 'D':
            printf("You have passed but could do better");
            break;
        case 'E':
            printf("Sorry, you failed");
            break;
        default:
            printf("Enter correct marks");
            break;
    }
    if(grade=='E'){
        printf("\nYou are not eligible for next level");
    }
    else{
        printf("\nYou are eligible for next level");
    }
   
    return 0;
}