#include <stdio.h>
int main(){
    int t,x;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&x);
        for(int j=0;j<x;j++){
            for(int k=0;k<j;k++){
                printf(" ");
            }
            for(int k=0;k<x-j;k++){
                printf("*");
            }
            printf("\n");
        }
    }
}