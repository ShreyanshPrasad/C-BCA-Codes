#include <stdio.h>

struct employee {
    int id;
    float salary;
};

void display(struct employee e) {
    printf("ID: %d\nSalary: %.2f\n", e.id, e.salary);
}

int main() {
    struct employee emp;

    printf("Enter ID and salary: ");
    scanf("%d %f", &emp.id, &emp.salary);

    display(emp);
    return 0;
}