#include <stdio.h>
int cases=1;
drawTimeTable(int x,int y){
    printf("Case %d: ",cases);
    if (x<=y){
        printf("print from %d to %d in accending order\n",x,y);
    }else{
        printf("print from %d to %d in reverse order\n",x,y);
    }
    printf("+");
    if(x<=y){
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
        for(int k=9;k>0;k--){
            printf("|");
            for(int j=x;j>=y;j--){
                printf("%2d=%d*%d|",j*k,k,j);
            }
            printf("\n");
        }
        printf("+");
        for(int j=x;j>=y;j--){
            printf("------+");
        }
    }
    printf("\n");
    cases++;
}
int main(){
    int x, y;
    while(scanf("%d %d",&x,&y)==2) {
        drawTimeTable(x, y);
    }
}