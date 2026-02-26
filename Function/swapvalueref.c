#include<stdio.h>

void swapV(int a, int b){
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void swapR(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
	int a, b;
	printf("Enter 2 no's: ");
	scanf("%d", &a);
	scanf("%d", &b);
	
	printf("Befor Swap\na: %d, b: %d", a, b);
	swapR(&a, &b);
	printf("\nAfter Swap\na: %d, b: %d", a, b);
	return 0;
}