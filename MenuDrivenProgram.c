#include <stdio.h>

int main() {
	float a, b, result;
	int choice;
	
	printf("Enter\n1. for addition\n2. for subtraction\n3. for multiplication\n4. for division\nPlease enter your choice: ");
	scanf("%d", &choice);

	printf("Enter no 1: ");
	scanf("%f", &a);

	printf("Enter no 2: ");
	scanf("%f", &b);

	switch(choice){
		case 1:
			printf("Sum = %f", a+b);
			break;
		case 2:
			printf("Dif = %f", a-b);
			break;
		case 3:
			printf("Prod = %f", a*b);
			break;
		case 4:
			printf("Quot = %f", a/b);
			break;
		default:
			printf("You entered wrong choice");
	}

	return 0;
}