#include <stdio.h>

int main() {
	
	char ch;
	printf("Enter a character: ");
	scanf("%c", &ch);

	switch(ch){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
			printf("Entered character is vowel");
			break;
		default:
			printf("Entered character is not vowel");
	}

	return 0;
}