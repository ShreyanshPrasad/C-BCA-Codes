#include<stdio.h>
#include<string.h>
int main() {
	char name[50];
	printf("Enter your name: ");
	scanf("%s", name);
	printf("Hi, my name is %s", name);

	FILE *fp;
	fp = fopen("handling.txt", "w");
	
	fprintf(fp, "Hi, my name is %s", name);
	fclose(fp);
		
	return 0;
}