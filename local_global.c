#include<stdio.h>
//global variables
int a = 5; 
int b;

void print_variables(){
	printf("%d\n", a);
	printf("%d\n", b);
}

int main() {
	//local variables
	int c;
	int d;
	print_variables();
	return 0;
}