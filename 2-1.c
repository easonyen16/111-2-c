#include <stdio.h>
int main(){
    int t,x,y;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&x);
        scanf("%d",&y);
        for (int k = 1; k < 10; k++){
            for(int j = x;j<=y;j++){
                printf("%d*%d=%2d",j,k,j*k);
                if(j!=y){
                    printf(",");
                }
            }
            printf("\n");
        }
    }
}