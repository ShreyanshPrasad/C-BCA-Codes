#include<stdio.h>
#include<string.h>

struct student {
	int roll;
	char name[50];
	float marks;
};

void print_student_details(struct student s1) {
	printf("---Student details are---");
	printf("\nName: %s", s1.name);
	printf("\nRoll no: %d", s1.roll);
	printf("\nMarks obtained: %f", s1.marks);
}

int main() {
	struct student s1;
	
	printf("Enter name of student: ");
	scanf("%s", s1.name);

	printf("Enter roll no of student: ");
	scanf("%d", &s1.roll);

	printf("Enter marks obtained by student: ");
	scanf("%f", &s1.marks);

	print_student_details(s1);
	
	return 0;
}