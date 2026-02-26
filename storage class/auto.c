#include<stdio.h>

int main() {
	int a = 5;
	auto int b; //Default value: Garbage, may change depending on compiler.
	
	printf("a = %d, b = %d", a, b);
	return 0;
}