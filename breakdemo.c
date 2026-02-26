#include<stdio.h>

int main() {

	int n = 0;
	while(n <= 10) {
		n++;

		if(n == 1) 
			break;

		printf("%d\n", n);
	}

	return 0;
}