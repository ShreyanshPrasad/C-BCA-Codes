#include<stdio.h>
int main() {
	FILE *fp;
	fp = fopen("Square.txt", "a");

	for(int i = 1; i <= 10; i++) {
		fprintf(fp, "%d's square is %d\n", i, i*i);
	}
	fclose(fp);
	return 0;

}