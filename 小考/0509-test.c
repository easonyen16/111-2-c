#include <stdio.h>
#define MAX 250

#include <string.h>

int mklong(const char *s, int *arr) {
    int size = strlen(s);
    for (int i = 0; i < size; i++) {
        arr[i] = s[size - i - 1] - '0';
    }
    return size;
}

int product(const int *a, int asize, const int *b, int bsize, int *c) {
    for (int i = 0; i < asize + bsize; i++) {
        c[i] = 0;
    }
    for (int i = 0; i < asize; i++) {
        for (int j = 0; j < bsize; j++) {
            c[i + j] += a[i] * b[j];
        }
    }
    for (int i = 0; i < asize + bsize - 1; i++) {
        c[i + 1] += c[i] / 10;
        c[i] %= 10;
    }
    
    int result_size = (c[asize + bsize - 1] == 0) ? (asize + bsize - 1) : (asize + bsize);
    
    // Remove unnecessary leading zeros
    while (result_size > 1 && c[result_size - 1] == 0) {
        result_size--;
    }
    
    return result_size;
}


void dump(const int *arr, int size) {
    for (int i = size - 1; i >= 0; i--) {
        printf("%d", arr[i]);
        if (i > 0 && (size - i) % 50 == 0) {
            printf("\\\n");
        }
    }
}
int main(){
  int a[MAX],b[MAX],c[MAX+MAX];
  int asize, bsize, csize, cases=0;
  char s[MAX+1];
  while(scanf("%s",  s)==1) {
    asize=mklong(s,a);
    scanf("%s", s);
    bsize=mklong(s,b);
    csize=product(a,asize,b,bsize,c);
    printf("Case #%d:\n", ++cases);
    dump(a, asize);
    printf("*\n");
    dump(b, bsize);
    printf("=\n");
    dump(c, csize);
    printf("\n");
  }
}
