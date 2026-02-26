#include <stdio.h>

int main() {
	
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	if(n % 2 == 0) {
		printf("The entered no is Even");
	}else{
		printf("The entered no id Odd");
	}
	return 0;
}