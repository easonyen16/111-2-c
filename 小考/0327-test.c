#include <stdio.h>
int gcd(int x, int y){
    int t = x%y;
    while(t!=0){
        printf("gcd(%d,%d)=", x, y);
        x = y;
        y = t;
        t = x%y;
    }
    printf("gcd(%d,%d)=%d\n", x, y, y);
    return y;
}
int main(){
    int x, y;
    int t;
    scanf("%d", &t);
    for(int i=0; i<t; i++){
        printf("Case %d: ", i+1);
        scanf("%d %d", &x, &y);
        gcd(x, y);
    }
}
