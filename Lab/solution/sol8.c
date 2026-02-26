#include <stdio.h>

struct student {
    int roll;
    float marks;
};

int main() {
    struct student s[3];
    int i;
    float max;

    for(i = 0; i < 3; i++) {
        printf("Enter roll and marks: ");
        scanf("%d %f", &s[i].roll, &s[i].marks);
    }

    max = s[0].marks;
    for(i = 1; i < 3; i++) {
        if(s[i].marks > max)
            max = s[i].marks;
    }

    printf("Highest Marks = %.2f", max);
    return 0;
}