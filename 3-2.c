#include <stdio.h>
int main(){
    int t,x;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&x);
        for(int j=0;j<x;j++){
            for(int k=0;k<x-j-1;k++){
                printf(" ");
            }
            for(int k=0;k<j+1;k++){
                printf("*");
            }
            printf("\n");
        }
    }
}