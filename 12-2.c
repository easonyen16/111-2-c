#include<stdio.h>  

void insertion_sort(int arr[], int n) {  
    int i, j, key;  

    for (i = 1; i < n; i++) {  
        key = arr[i];  
        j = i - 1;  

        while (j >= 0 && arr[j] > key) {  
            arr[j+1] = arr[j];  
            j = j - 1;  
        }  
        arr[j+1] = key;  

        // Print array after each pass  
        printf("pass %d: ", i);  
        for (j = 0; j <= i; j++) {  // print up to the last inserted element
            printf("%d", arr[j]);  
            if(j < i) {
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

        insertion_sort(arr, N);  

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
