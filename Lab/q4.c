#include<stdio.h>

void display(int a[], int size) {
	printf("Elements of array are : \n");
	for(int i = 0; i < size; i++) {
		printf("%d\n", a[i]);
		a[i] += 1;
	}
}

int main() {

	int arr[5];

	printf("Enter 5 elements in array: ");
	for(int i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
	}

	display(arr, 5);

	printf("Elements after display function:\n");
	for(int i = 0; i < 5; i++) {
		printf("%d\n", arr[i]);
	}

	return 0;
}