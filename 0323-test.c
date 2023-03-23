#include <stdio.h>
int main(){
    int c, cnt=0;
    int lineno=0;
    int emptyLine=0;
    while((c=getchar())!=EOF){
        if(cnt==0){
            lineno++;
            printf("%04d: ", lineno);
            if(c=='\n'){
                emptyLine++;
            }
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
    if(emptyLine>1){
        printf("%d empty lines\n", emptyLine);
    }else{
        printf("%d empty line\n", emptyLine);
    }
}
