#include<stdio.h>

int fact(int n) {
	if(n == 0)	
		return 1;
	else
		return n * fact(n - 1);
}

int main() {

	int no, factorial = 1;
	printf("Enter a number: ");
	scanf("%d", &no);

	factorial = fact(no);

	printf("Factorial of %d is %d", no, factorial);
	
	return 0;
}