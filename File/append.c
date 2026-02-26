#include <stdio.h>

int main() {

	FILE *fp;
	fp = fopen("prince.txt", "a");

	fprintf(fp, "\t I am student of BCA, I have %d pen\t", 5);

	fclose(fp);
	
	return 0;
}