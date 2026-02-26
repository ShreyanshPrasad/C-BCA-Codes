#include<stdio.h>

void swapv(int x, int y) {

	int t = x;
	x = y;
	y = t;

}

void swapr(int *x, int *y) {

	int t = *x;
	*x = *y;
	*y = t;

}

int main() {

	int x = 5, y = 9;
	
	printf("Before swap, x = %d, y = %d\n", x, y);

	swapv(x, y); // Call by value
	printf("After swap, x = %d, y = %d\n", x, y);

	swapr(&x, &y); // Call by reference 
	printf("After swap, x = %d, y = %d\n", x, y);

	return 0;
}