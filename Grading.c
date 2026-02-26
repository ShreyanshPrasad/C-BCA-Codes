#include <stdio.h>

int main() {
	
	int n;
	printf("Enter your percentage: ");
	scanf("%d", &n);

	if(n > 95) {
		printf("Distinction");
	} else if(n > 80) {
		printf("Outstanding");
	} else if(n > 60) {
		printf("Good");
	} else if(n > 45) {
		printf("Need to work hard");
	} else {
		printf("Focus on your studies.!");
	}

	return 0;
}