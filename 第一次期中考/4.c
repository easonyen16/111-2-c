#include <stdio.h>
int drawTriangle(int x){
    for(int j=0;j<x/2+1;j++){
        for(int k=0;k<x/2-j;k++){
            printf(" ");
        }
        if(j>0){
            printf("*");
        }
        for(int k=x/2-j+1;k<x/2;k++){
            printf(" ");
        }
        printf("*\n");
    }
    for(int j=0;j<x/2;j++){
        for(int k=0;k<j+1;k++){
            printf(" ");
        }
        if(j<x/2-1){
            printf("*");
        }
        for(int k=j+2;k<x/2;k++){
            printf(" ");
        }
        printf("*\n");
    }
    return 0;
}
int main() {
  int cases, n;
  scanf("%d", &cases);
  while(cases--) {
    scanf("%d", &n);
    drawTriangle(n);
  }
  return 0;
}