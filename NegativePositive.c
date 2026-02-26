#include <stdio.h>

int main() {
	
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	if(n < 0) {
		printf("The entered no is negative");
	} else if(n == 0) {
		printf("The entered no is Zero");
	}
	else{
		printf("The entered no is positive");
	}
	return 0;
}