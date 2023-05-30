#include <stdio.h>


int main(){
    int cases=1;
    int a,b;
    int total;
    scanf("%d",&total);
    for(int k=0;k<total;k++){
        int sum=0;
        scanf("%d %d",&a,&b);
        printf("Case %d: OddSum",cases);
        if(a==b){
            if(a%2==0){
                printf("[%d,%d]=0\n",a,b);
            }else{
                printf("[%d,%d]=%d\n",a,b,a);
            }
        }else if(a-b==1||b-a==1){
            if(a%2==0){
                printf("[%d,%d]=%d\n",a,b,b);
            }else if(b%2==0){
                printf("[%d,%d]=%d\n",a,b,a);
            }
        }else if((a-b==2||b-a==2)&&a%2==0){
            if(a>b){
                printf("[%d,%d]=%d\n",a,b,a-1);
            }else{
                printf("[%d,%d]=%d\n",a,b,a+1);
            }
        }else if(a<b){
            if(a%2==1){
                sum=sum+a;
                printf("[%d,%d]=%d",a,b,a);
            }else{
                printf("[%d,%d]=%d",a,b,a+1);
                a++;
                sum=sum+a;
            }
            for(int i=a+1;i<=b;i++){
                if(i%2==1){
                    sum=sum+i;
                    printf("+%d",i);
                }
            }
            printf("=%d\n",sum);
        }else{
            if(a%2==1){
                sum=sum+a;
                printf("[%d,%d]=%d",a,b,a);
            }else{
                printf("[%d,%d]=%d",a,b,a-1);
                a--;
                sum=sum+a;
            }
            for(int i=a-1;i>=b;i--){
                if(i%2==1){
                    sum=sum+i;
                    printf("+%d",i);
                }
            }
            printf("=%d\n",sum);
        }
        cases++;
    }
}
