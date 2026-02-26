#include <stdio.h>

int checkPrime(int no) {
	
	if(no == 0 || no == 1) {
		return 0;
	} else {

		for(int i = 2; i <= no / 2; i++) {
			if( no % i == 0)
				return 0;			
		}
	}
	
	return 1;
}

int main() {
	
	int no;
	printf("Enter a positive number: ");
	scanf("%d", &no);
		
	if(checkPrime(no)) {
		printf("%d is prime no", no);
	} else {
		printf("%d is not prime no", no);
	}	

	return 0; 
	
}