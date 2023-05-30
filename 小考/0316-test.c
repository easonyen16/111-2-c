#include <stdio.h>
int main(){
    int x,y;
    int i=1;
    while(1){
        scanf("%d %d",&x,&y);
        if(x==0&&y==0){
            break;
        }
        printf("Case %d:\n",i);
        if(x<=y){
            printf("+");
            for(int j=x;j<=y;j++){
                printf("------+");
            }
            printf("\n");
            for(int k=9;k>0;k--){
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
        i++;
    }
}
