#include<stdio.h>

void sum_avg(int a, int b, int *sum, float *avg) {
	
	*sum = a + b;
	*avg = (float) *sum / 2;

}

int main() {

	int a, b, sum;
	float avg;

	printf("Enter 2 numbers: ");
	scanf("%d", &a);
	scanf("%d", &b);

	sum_avg(a, b, &sum, &avg);
	
	printf("sum = %d\n", sum);
	printf("avg = %f", avg);

	return 0;
}