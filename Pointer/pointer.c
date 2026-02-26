#include<stdio.h>

int main() {

	int n = 5;
	int *ptr = &n;
	
	printf("%d\n", ptr); //Address
	printf("%d\n", *ptr);//Value at that address
	printf("%d", &ptr);//Address of ptr variable

	return 0;	
}