#include <stdio.h>
#include <math.h>

#define MAX_ITER 100
#define EPS 1e-12

double calculate_term(int n, double x) {
    double term = 1.0;
    int i;
    for (i = 1; i <= 2*n; i++) {
        term *= x / i;
    }
    if (n % 2 != 0) {
        term = -term;
    }
    return term;
}

void calculate_cos(int caseNo, double x) {
    double sum = 0.0, term;
    int n = 0;
    
    printf("Case %d:\n", caseNo);
    printf("No Term               Summation\n");
    printf("-- ------------------ ------------------\n");
    
    while (n < MAX_ITER) {
        term = calculate_term(n, x);
        if (fabs(term) < EPS) {
            break;
        }
        sum += term;
        printf("%2d %18.10lf %18.10lf\n", n+1, term, sum);
        n++;
    }
    
    printf("-- ------------------ ------------------\n");
    printf("cos(%.10f)=%.10lf\n", x, sum);
}

int main() {
    int n, i;
    double x;
    
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        scanf("%lf", &x);
        calculate_cos(i, x);
    }
    
    return 0;
}
