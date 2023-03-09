#include <stdio.h>
int main(){
    int t,x,y;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d",&x,&y);
        printf("Case %d:\n",i+1);
        if(x<=y){
            printf("+");
            for(int j=x;j<=y;j++){
                printf("------+");
            }
            printf("\n");
            for(int k=1;k<10;k++){
                printf("|");
                for(int j=x;j<=y;j++){
                    printf("%d*%d=%2d|",j,k,j*k);
                }
                printf("\n");
            }printf("+");
            for(int j=x;j<=y;j++){
                printf("------+");
            }
        }else{
            printf("+");
            for(int j=x;j>=y;j--){
                printf("------+");
            }
            printf("\n");
            for(int k=9;k>0;k--){
                printf("|");
                for(int j=x;j>=y;j--){
                    printf("%d*%d=%2d|",j,k,j*k);
                }
                printf("\n");
            }printf("+");
            for(int j=x;j>=y;j--){
                printf("------+");
            }
        }
        printf("\n");
    }
}