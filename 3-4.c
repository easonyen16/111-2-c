#include <stdio.h>
int main(){
    int t,x;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&x);
        for(int j=0;j<x/2+1;j++){
            for(int k=0;k<x/2-j;k++){
                printf(" ");
            }
            if(j>0){
                printf("*");
            }
            for(int k=x/2-j+1;k<x/2;k++){
                printf(" ");
            }
            printf("*\n");
        }
        for(int j=0;j<x/2;j++){
            for(int k=0;k<j+1;k++){
                printf(" ");
            }
            if(j<x/2-1){
                printf("*");
            }
            for(int k=j+2;k<x/2;k++){
                printf(" ");
            }
            printf("*\n");
        }
    }
}