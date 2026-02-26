#include <stdio.h>

void display(int arr[], int n) {
    int i;
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
}

int main() {
    int a[5], i;

    printf("Enter 5 elements:\n");
    for(i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    display(a, 5);
    return 0;
}