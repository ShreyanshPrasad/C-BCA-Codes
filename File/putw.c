#include<stdio.h>
int main() {
	FILE *fh;

	int data = 65;
	fh = fopen("prince.dat", "wb");

	putw(data, fh);
	fclose(fh);

	return 0;
}