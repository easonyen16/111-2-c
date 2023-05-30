#include <stdio.h>
void dump(int arr[], int n, int min_idx, int swapped_idx){
  
for (int i = 0; i < n; i++) {
        if (i == swapped_idx && swapped_idx < min_idx) {
            printf("*%d", arr[i]);
        } else if (i == min_idx) {
            printf("*%d", arr[i]);
        } else {
            printf(" %d", arr[i]);
        }
    }
  printf("\n");
}
void selection(int arr[], int n){
  
int i, j, min_idx, temp;
    for (i = 0; i < n-1; i++) {
        min_idx = i;
        for (j = i+1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
        printf("pass %d:", i+1);
        dump(arr, n, min_idx, i);
    }
}
main(){
  int i, j, n, a[1024];
  for(i=1;;++i) {
    
scanf("%d", &n);
        if (n == 0) break;
        for(j = 0; j < n; ++j) {
            scanf("%d", &a[j]);
        }
    if(i>1)printf("\n");
    printf("Case %d:", i);
    dump(a, n, n, n);
    selection(a, n);
  }
}
