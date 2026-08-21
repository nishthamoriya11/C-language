#include<stdio.h>
int main(){
    int i, j, len;
    char str[200];
    printf("Enter string: ");
    fgets(str,sizeof(str),stdin);
    len=0;
    for(i=0;str[i]!='\0';i++){
        len++;
    }
    if(i>0 && str[len-1]=='\n'){
        str[len-1]='\0';
        len--;
    }
    for(i=0;str[i]!='\0';i++){
        int appeared=0;
        for(j=0;j<i;j++){
            if(str[j]==str[i]){
                appeared=1;
                break;
            }
        }
        if(appeared){
            continue;
        }
        int count=0;
        for(j=0;str[j]!='\0';j++){
            if(str[j]==str[i]){
                count++;
            }
        }  
        printf("%c => %d\n",str[i],count); 
        
    }
    return 0;
}