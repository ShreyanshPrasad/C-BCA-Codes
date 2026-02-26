#include<stdio.h>
#include<string.h>

struct student {
	int roll;
	char name[50];
	float marks;
};

int main() {

	struct student stud[3];
	printf("Enter details of 3 students\n");
	for(int i = 0; i < 3; i++) {
		printf("Enter roll no of student %d: ", i+1);
		scanf("%d", &stud[i].roll);

		printf("Enter name of student %d: ", i+1);
		scanf("%s", stud[i].name);

		printf("Enter marks of student %d: ", i+1);
		scanf("%f", &stud[i].marks);
		
	}

	printf("\nDetails of Students are\n");
	for(int i = 0; i < 3; i++) {
		printf("Roll no of student %d is %d\n", i+1, stud[i].roll);
		printf("Name of student %d is %s\n", i+1, stud[i].name);
		printf("Marks of student %d is %f\n", i+1, stud[i].marks);
	
	}
	return 0;
}