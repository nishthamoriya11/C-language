#include<stdio.h>
main(){
    int a,i, len=0;
    char str[200], *ptr;
    printf("Enter string: ");
    fgets(str,sizeof(str),stdin);
    ptr=str;

    while (*ptr!='\0'){
        len++;
        ptr++;
    }
    
   
    printf("lengtht of the string: %d",len);
}