#include <stdio.h>

int main() {
	
	int marks = 72; 
	char grade = (marks >= 90) ? 'A' : 
			(marks >= 75) ? 'B' : 
			(marks >= 50) ? 'C' : 'F'; 
	printf("Grade = %c", grade);

	return 0;
}