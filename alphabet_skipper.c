#include<stdio.h>
main(){
    int ch='a';
    do{
        printf("%c ",ch);
        ch=ch+4;
    }while(ch<='z');
}