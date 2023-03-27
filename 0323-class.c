#include <stdio.h>
int gcd(int x, int y){
    int t = x%y;
    while(t!=0){
        x = y;
        y = t;
        t = x%y;
    }
    return y;
}
int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    printf("The greatest common divisor of %d and %d is %d", x, y, gcd(x, y));
}