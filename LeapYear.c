#include <stdio.h>

int main() {
	
	int n;
	printf("Enter a Year: ");
	scanf("%d", &n);
	
	((n % 4 == 0 && n % 100 != 0) || n % 400 == 0) ? printf("Entered year is leap year") : printf("Entered year is not leap year");

	return 0;
}

	/*if((n % 4 == 0 && n % 100 != 0) || n % 400 == 0) {
		printf("The entered year is Leap Year");
	} else{
		printf("The entered not Leap Year");
	}*/