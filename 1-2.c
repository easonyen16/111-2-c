#include <stdio.h>
int main(){
    int cases=1;
    while (1)
    {
        int numbers;
        int new=0;
        int total=0;
        int max=0;
        int min=0;
        double avg=0;
        scanf("%d", &numbers);
        if (numbers==0)
        {
            break;
        }
        scanf("%d", &new);
        max=new;
        min=new;
        total=new;
        for(int i=0;i<(numbers-1);i++){
            scanf("%d", &new);
            total=total+new;
            if (new>max){
                /* code */
                max=new;
            }
            if (new<min){
                /* code */
                min=new;
            }
        }
        avg=(double)total/(double)numbers;
        printf("Case %d:\nmax=%d\nmin=%d\nsum=%d\navg=%.2f\n",cases,max,min,total,avg);
        cases++;
    }
}