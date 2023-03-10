#include <stdio.h>
int main(){
    int t,x;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&x);
        for(int j=0;j<x/2;j++){
            for(int k=0;k<(x-(1+2*j))/2;k++){
                printf(" ");
            }
            printf("*");
            for(int l=0;l<j;l++){
                printf(" *");
            }
            printf("\n");
        }
        for(int s=0;s<x;s++){
            printf("*");
        }
        printf("\n");
    }
}