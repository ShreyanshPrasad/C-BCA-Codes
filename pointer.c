#include <stdio.h>

int main() {

	int a = 5;
	int *p = &a;
	printf("Value of variable (a): %d\n", a);
	printf("Address of variable (&a): %d\n", &a);
	printf("Address of variable (p): %d\n", p);
	printf("Value of variable (*p): %d\n", *p);
	printf("Address of pointer variable (&p): %d\n", &p);
	return 0;
}