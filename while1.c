#include <stdio.h>

int main() {

	int i = -50;

	while(i >= -50 && i <= 50){

		if(i % 2 == 0){
			printf("%d\n", i);
		}
		i++;

		//printf("%d\n", i+=2); 
	}

	return 0;
}