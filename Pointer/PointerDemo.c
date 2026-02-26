#include<stdio.h>

int main() {
	
	int i = 5;
	int *p = &i;
	printf("Address of i is %d\n", p);
	printf("Valuse of i is %d\n", *p);
	printf("Address of p is %d\n", &p);
	return 0;
}