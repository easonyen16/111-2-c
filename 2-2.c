#include <stdio.h>
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        printf("Case %d:\n",i+1);
        int x=1;
        while(x<10){
            for(int j=1;j<10;j++){
                for(int k=x;k<n+x;k++){
                    if(k<10){
                        printf("%d*%d=%2d",k,j,j*k);
                        if(k<n+x-1&&k!=9){
                            printf(",");
                        }
                    }
                }
                printf("\n");
            }
            x=x+n;
        }
    }
}