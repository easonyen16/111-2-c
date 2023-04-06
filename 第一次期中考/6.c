#include <stdio.h>
int main(){
    int c, cnt=0;
    int lineno=0;
    int nothing=0;
    int PunctuationMarks=0;
    int InvisibleCharacters=0;
    while((c=getchar())!=EOF){
        if(cnt==0){
            lineno++;
            printf("%04d: ", lineno);
        }
        if(c>='a'&&c<='z'){
            nothing++;
        }else if(c>='A'&&c<='Z'){
            nothing++;
        }else if(c>='0'&&c<='9'){
            nothing++;
        }else if(c>='!'&&c<='~'){
            PunctuationMarks++;
        }else{
            InvisibleCharacters++;
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
    if(PunctuationMarks>1){
        printf("%d punctuation marks, ", PunctuationMarks);
    }else{
        printf("%d punctuation mark, ", PunctuationMarks);
    }
    if(InvisibleCharacters>1){
        printf("%d invisible characters\n", InvisibleCharacters);
    }else{
        printf("%d invisible character\n", InvisibleCharacters);
    }
}