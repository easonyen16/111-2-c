#include<stdio.h>
main() {
	
int characters=0;
    int charactersPerLine=0;
    int over64Character=0;
    int c, cnt=0;
    int lineno=0;
    int emptyline=0;
    int nothing=0;
    int digit=0;
    int letter=0;
    int PunctuationMarks=0;
    int InvisibleCharacters=0;
    while((c=getchar())!=EOF){
        if(cnt==0){
            lineno++;
            printf("%04d: ", lineno);
            if(c=='\n'){
                emptyline++;
            }
        }
        characters++;
        charactersPerLine++;
        if(c>='a'&&c<='z'){
            letter++;
        }else if(c>='A'&&c<='Z'){
            letter++;
        }else if(c>='0'&&c<='9'){
            digit++;
        }else if(c>='!'&&c<='~'){
            PunctuationMarks++;
        }else{
            InvisibleCharacters++;
        }
        putchar(c);
        if(c=='\n'){
            if(charactersPerLine>64){
                over64Character++;
            }
            charactersPerLine=0;
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
    if(emptyline>1){
        printf("%d empty lines, ", emptyline);
    }else{
        printf("%d empty line, ", emptyline);
    }
    if(over64Character>1){
        printf("%d over-64-character lines, ", over64Character);
    }else{
        printf("%d over-64-character line, ", over64Character);
    }
    if(characters>1){
        printf("%d characters\n", characters);
    }else{
        printf("%d character\n", characters);
    }
    if(digit>1){
        printf("%d digits, ", digit);
    }else{
        printf("%d digit, ", digit);
    }
    if(letter>1){
        printf("%d letters, ", letter);
    }else{
        printf("%d letter, ", letter);
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
