#include<stdio.h>  

void selection_sort(int arr[], int n) {  
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

        // Print array after each pass  
        printf("pass %d: ", i+1);  
        for (j = i; j < n; j++) { // print from the last sorted element to the end of the array
            printf("%d", arr[j]);  
            if(j < n-1) {
                printf(" "); // print space if it is not the last number in this line
            }
        }  
        printf("\n");  
    }  
}  

int main() {  
    int N;  
    int case_num = 1;  
    while (1) {  
        scanf("%d", &N);  
        if (N == 0) break;  
        if(case_num > 1) printf("\n");  

        int arr[N];  
        for (int i = 0; i < N; i++) {  
            scanf("%d", &arr[i]);  
        }  

        printf("Case %d:\n", case_num++);  
        printf("input: ");  
        for (int i = 0; i < N; i++) {  
            printf("%d", arr[i]);  
            if(i < N-1) {
                printf(" "); // print space if it is not the last number in this line
            }
        }  
        printf("\n");  

        selection_sort(arr, N);  

        printf("sorted: ");  
        for (int i = 0; i < N; i++) {  
            printf("%d", arr[i]);  
            if(i < N-1) {
                printf(" "); // print space if it is not the last number in this line
            }
        }  
        printf("\n");  
    }  

    return 0;  
}
