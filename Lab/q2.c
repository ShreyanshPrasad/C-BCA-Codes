#include <stdio.h>

int factorial(int);
int main() {

	int no;
	
	printf("Enter a no: ");
	scanf("%d", &no);

	if(no < 0)
		printf("Factorial of negative no is Undefined");
	else
		printf("Factorial of %d is %d", no, factorial(no));

	return 0;	
	
}

int factorial(int n) {
	int fact = 1;
	for(int i = 1; i <= n; i++) {
		fact *= i;
	}
	return fact;
}