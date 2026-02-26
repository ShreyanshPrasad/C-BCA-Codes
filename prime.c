#include<stdio.h>

int main() {

	int n, gous = 1, i;
	
	printf("Enter a positive no: ");
	scanf("%d", &n);

	if(n == 0 && n == 1) {
		gous = 0;
	}
	else{
		for(i = 2; i <= n/2; i++){
			if(n % i == 0) {
				gous = 0;
				break;
			}
		}
	}

	if(gous == 1)
		printf("%d is prime", n);
	else if(gous == 0)
		printf("%d is composite", n);
	
	return 0;
}