#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 10000

void findRelation(int a[], int b[], int n, int m) {
    int i, j;
    int count_a = 0, count_b = 0;
    
    for(i=0; i<n; i++) {
        for(j=0; j<m; j++) {
            if(a[i] == b[j]) {
                count_a++;
                break;
            }
        }
    }
    
    for(i=0; i<m; i++) {
        for(j=0; j<n; j++) {
            if(b[i] == a[j]) {
                count_b++;
                break;
            }
        }
    }
    
    if(count_a == n && count_b == m)
        printf("A equals B\n");
    else if(count_a == n)
        printf("A is a proper subset of B\n");
    else if(count_b == m)
        printf("B is a proper subset of A\n");
    else if(count_a == 0)
        printf("A and B are disjoint\n");
    else
        printf("I'm confused!\n");
}

int main() {
    int a[MAX], b[MAX];
    char line[MAX];
    int n = 0, m = 0;
    int i;
    int line_count = 0;

    while(fgets(line, sizeof(line), stdin)) {
        line_count++;
        char *token = strtok(line, " \n");
        while (token) {
            if (line_count % 2 == 1) {
                a[n++] = atoi(token);
            } else {
                b[m++] = atoi(token);
            }
            token = strtok(NULL, " \n");
        }

        if (line_count % 2 == 0) {
            findRelation(a, b, n, m);
            n = 0;
            m = 0;
        }
    }

    return 0;
}
