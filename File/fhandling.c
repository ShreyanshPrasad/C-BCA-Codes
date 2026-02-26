#include<stdio.h>
int main() {
	FILE *fh;
	char name[7] = "Prince";
	int age = 19;
	fh = fopen("prince.pdf", "a");

	putw(49, fh);
	fclose(fh);

	return 0;
}