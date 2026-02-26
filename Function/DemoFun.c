#include<stdio.h>

int princie(int a, int b) {
	return a + b;
}


int main() {

	int x = 5, y = 9;
	
	printf("%d", princie(x, y));
	return 0;
}