#include <stdio.h>
int main(){
    int c, cnt=0;
    int lineno=0;
    int character=0;
    int letter=0;
    int digit=0;
    while((c=getchar())!=EOF){
        if(cnt==0){
            lineno++;
            printf("%03d: ", lineno);
        }else if(cnt%40==0){
            if(c!='\n'){
                printf("\n...+ ");
            }
        }
        character++;
        if(c>='a'&&c<='z'){
            letter++;
        }else if(c>='A'&&c<='Z'){
            letter++;
        }else if(c>='0'&&c<='9'){
            digit++;
        }
        putchar(c);
        if(c=='\n'){
            cnt=0;
        }else{
            cnt++;
        }
    }
    if(lineno>1){
        printf("%d lines, ", lineno);
    }else{
        printf("%d line, ", lineno);
    }
    if(character>1){
        printf("%d characters, ", character);
    }else{
        printf("%d character, ", character);
    }
    if(letter>1){
        printf("%d letters, ", letter);
    }else{
        printf("%d letter, ", letter);
    }
    if(digit>1){
        printf("%d digits\n", digit);
    }else{
        printf("%d digit\n", digit);
    }
}
