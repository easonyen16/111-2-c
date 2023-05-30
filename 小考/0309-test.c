#include <stdio.h>
int main(){
    int t,x,y;
    t=1;
    while(1){
        scanf("%d %d",&x,&y);
        if(x==0&&y==0){
            break;
        }
        printf("Case %d:\n",t);
        printf("+");
        if(x<y){
            for(int j=x;j<=y;j++){
                printf("------+");
            }
            printf("\n");
            for(int k=1;k<8;k++){
                printf("|");
                for(int j=x;j<=y;j++){
                    printf("%d*%d=%2o|",j,k,j*k);
                }
                printf("\n");
            }
            printf("+");
            for(int j=x;j<=y;j++){
                printf("------+");
            }
        }
        else{
            for(int j=x;j>=y;j--){
                printf("------+");
            }
            printf("\n");
            for(int k=1;k<8;k++){
                printf("|");
                for(int j=x;j>=y;j--){
                    printf("%d*%d=%2o|",j,k,j*k);
                }
                printf("\n");
            }
            printf("+");
            for(int j=x;j>=y;j--){
                printf("------+");
            }
        }
        printf("\n");
        t++;
    }
}
