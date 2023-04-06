#include <stdio.h>
int gcd(int x, int y){
    int t = x%y;
    int loops = 1;
    while(t!=0){
        printf("[Loop %d] %d %% %d = %d\n", loops, x, y, t);
        x = y;
        y = t;
        t = x%y;
        loops++;
    }
    printf("[Loop %d] %d %% %d = %d\n", loops, x, y, t);
    return y;
}
int main(){
    int x, y;
    int t;
    scanf("%d", &t);
    for(int i=0; i<t; i++){
        printf("Case %d:\n", i+1);
        scanf("%d %d", &x, &y);
        printf("The Greatest Common Divisor of %d and %d is %d\n", x, y, gcd(x, y));
    }
}