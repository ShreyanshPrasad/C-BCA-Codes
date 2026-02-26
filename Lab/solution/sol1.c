#include <stdio.h>

void calculate(int a, int b, int *sum, float *avg) {
    *sum = a + b;
    *avg = (float)(*sum) / 2;
}

int main() {
    int x, y, sum;
    float avg;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    calculate(x, y, &sum, &avg);

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}