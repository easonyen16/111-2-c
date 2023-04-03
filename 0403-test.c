#include <stdio.h>
int drawTriangle(int x){
    for(int w=0;w<(x-1)/2;w++){
        printf(" ");
    }
    printf("*\n");
    for(int j=1;j<x/2+1;j++){
        for(int k=0;k<(x-(1+2*j))/2;k++){
            printf(" ");
        }
        printf("/");
        if(j%2!=0){
            printf("V");
            for(int l=1;l<j;l++){
                printf("*V");
            }
        }else{
            for(int l=0;l<j*2-1;l++){
                printf("*");
            }
        }
        printf("\\\n");
    }
    return 0;
}
int main(){
    int cases, n;
    scanf("%d", &cases);
    while(cases--) {
        scanf("%d", &n);
        drawTriangle(n);
    }
    return 0;
}
