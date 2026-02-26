#include <stdio.h>

struct student {
    int roll;
    char name[20];
    float marks;
};

int main() {
    struct student s[3];
    int i;

    for(i = 0; i < 3; i++) {
        printf("Enter roll, name and marks of student %d:\n", i+1);
        scanf("%d %s %f", &s[i].roll, s[i].name, &s[i].marks);
    }

    printf("\nStudent Details:\n");
    for(i = 0; i < 3; i++) {
        printf("%d %s %.2f\n", s[i].roll, s[i].name, s[i].marks);
    }

    return 0;
}