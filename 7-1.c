#include <stdio.h>
#include <math.h>

double factorial(int n) {
    if (n == 0) return 1;
    double fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

void calculate_sin(double x, int case_number) {
    double term = x;
    double sum = term;
    int term_number = 1;

    printf("Case %d:\n", case_number);
    printf("No Term               Summation\n");
    printf("-- ------------------ ------------------\n");

    while (fabs(term) >= 0.0000000001) {
        printf("%2d %18.10lf %18.10lf\n", term_number, term, sum);
        term *= -1 * x * x / ((2 * term_number + 1) * (2 * term_number));
        sum += term;
        term_number++;
    }

    printf("-- ------------------ ------------------\n");
    printf("sin(%.10f)=%.10lf\n", x, fabs(sum) < 0.0000000001 ? 0 : sum);
}

int main() {
    int n;
    scanf("%d", &n);
    double x;
    for (int i = 1; i <= n; i++) {
        scanf("%lf", &x);
        calculate_sin(x, i);
    }
    return 0;
}
