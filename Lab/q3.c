#include <stdio.h>

int fact(int);

int main() {
	
	int no;
	printf("Enter a positive no: ");
	scanf("%d", &no);

	if(no > 0)
		printf("Factorial of %d is %d", no, fact(no));
	else
		printf("Please enter a valid no to find its factorial");

	return 0;
	
}

int fact(int no) {
	
	if(no == 1)
		return 1;
	else
		return no * fact(no - 1);	
}