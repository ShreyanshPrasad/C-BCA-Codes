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
	
	int lb, ub;
	printf("Enter Lower bound: ");
	scanf("%d", &lb);

	printf("Enter Upper bound: ");
	scanf("%d", &ub);
		
	for(int i = lb; i <= ub; i++) {
		if(checkPrime(i)) {
			printf("%d is prime no\n", i);
		}/* else {
			printf("%d is not prime no\n", i);
		}*/
	}	

	return 0; 
	
}