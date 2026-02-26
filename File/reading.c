#include<stdio.h>

int main() {
	char word[50];
	FILE *fp;
	fp = fopen("prince.txt", "r");
	int count = 0;
	
	if(fp == NULL)
		printf("File not present.!");
	else {
		while(fscanf(fp, "%s", word) != EOF) {
			printf("%s ", word);
			count++;
		}
	}

	printf("\nThere are %d words in the file", count);

	fclose(fp);
	return 0;
}