#include<stdio.h>  

void bubble_sort(int arr[], int n) {  
    int i, j, temp;  
    int swapped;  

    for (i = 0; i < n-1; i++) {  
        swapped = 0;  
        for (j = 0; j < n-i-1; j++) {  
            if (arr[j] > arr[j+1]) {  
                temp = arr[j];  
                arr[j] = arr[j+1];  
                arr[j+1] = temp;  
                swapped = 1;  
            }  
        }  

        // Print array after each pass  
        printf("pass %d: ", i+1);  
        for (j = 0; j < n-i; j++) {  
            printf("%d", arr[j]);  
            if(j < n-i-1) {
                printf(" "); // print space if it is not the last number in this line
            }
        }  
        printf("\n");  

        if (swapped == 0) {  
            break;  
        }  
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

        bubble_sort(arr, N);  

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
}#include<stdio.h>  

void bubble_sort(int arr[], int n) {  
    int i, j, temp;  
    int swapped;  

    for (i = 0; i < n-1; i++) {  
        swapped = 0;  
        for (j = 0; j < n-i-1; j++) {  
            if (arr[j] > arr[j+1]) {  
                temp = arr[j];  
                arr[j] = arr[j+1];  
                arr[j+1] = temp;  
                swapped = 1;  
            }  
        }  

        // Print array after each pass  
        printf("pass %d: ", i+1);  
        for (j = 0; j < n-i; j++) {  
            printf("%d", arr[j]);  
            if(j < n-i-1) {
                printf(" "); // print space if it is not the last number in this line
            }
        }  
        printf("\n");  

        if (swapped == 0) {  
            break;  
        }  
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

        bubble_sort(arr, N);  

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
