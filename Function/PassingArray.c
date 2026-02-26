#include<stdio.h>

int sumArray(int arr[], int s) {

	int sum = 0;
	for(int i = 0; i < s; i++)	
		sum += arr[i];
	return sum;
}

int main() {
	int arr[5];
	printf("Enter 5 elements: ");
	for(int i = 0; i < 5; i++)
		scanf("%d", &arr[i]);
	
	printf("\nSum of entered elements is = %d", sumArray(arr, 5));
	return 0;
}