#include<stdio.h>

int main() {

	int i, j, c = 65;
	
	for(i = 1; i <= 5; i++) {
		for(j = 1; j <= i; j++) {
			printf("%c", c++);
		}
		printf("\n");
	}

	return 0;
}