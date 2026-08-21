#include<stdio.h>
int main(){
    int len=0,i;
    char str[200];
    printf("Enter string: ");
    fgets(str,sizeof(str),stdin);

    for(i=0;str[i]!='\0';i++){
        len++;
    }
    if(i>0 && str[len-1]=='\n'){
        str[len-1]='\0';
        len--;
    }
    int palindrome=1;
    for(i=0;i<=len/2;i++){
        if(str[i]!=str[len-1-i]){
            palindrome=0;
        }
    }
    if(palindrome){
        printf("Given string is palindrome");
    }
    else{
         printf("Given string is not palindrome");
    }
}