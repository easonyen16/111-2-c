#include <stdio.h>
int main(){
    int c;
    int Big=0;
    while ((c=getchar())!=EOF){
        if((c<'A'||c>'Z')&&(c<'a'||c>'z')){
            putchar(c);
            Big=0;
        }else{
            if(Big==0){
                if(c>='a'&&c<='z'){
                    putchar(c-32);
                }else{
                    putchar(c);
                }
                Big=1;
            }else{
                if(c>='A'&&c<='Z'){
                    putchar(c+32);
                }else{
                    putchar(c);
                }
                Big=1;
            }
        }
    }
}