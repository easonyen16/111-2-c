#include <stdio.h>

int gcd(int x, int y){
    int t = x%y;
    int loops = 1;
    while(t!=0){
        printf("[Loop %d] %d / %d = %d * %d + %d\n", loops, x, y, y, x/y, t);
        x = y;
        y = t;
        t = x%y;
        loops++;
    }
    printf("[Loop %d] %d / %d = %d * %d + %d\n", loops, x, y, y, x/y, t);
    return y;
}
main(){
  int n=0,a,b,cases;
  scanf("%d",&cases);
  while(n<cases){
    scanf("%d %d", &a, &b);
    printf("Case %d:\n", ++n);
    printf("GCD(%d, %d) = %d\n",  a, b, gcd(a, b));
  }
}
