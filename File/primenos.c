#include<stdio.h>

int isPrime(int no) {
	
	if(no < 2)
		return 0;
	
	for(int i = 2; i < no / 2; i++) {
		if(no % i == 0)	{
			return 0;
		}
	}

	return 1;
}

int main() {
	FILE *fp;
	fp = fopen("PrimeNos.txt", "a");
	for(int i = 1; i <= 100; i++) {
		if(isPrime(i))
			fprintf(fp, "%d, \t", i);

	}
	fclose(fp);
	return 0;
}