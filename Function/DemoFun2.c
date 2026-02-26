#include<stdio.h>

int princie(int, int); //declare function, AKA function prototyping

int main() {

	int x, y;
	x = 5, y = 9;
	
	printf("%d", princie(x, y));
	return 0;
}

int princie(int a, int b) { //define function
	return a + b;
}