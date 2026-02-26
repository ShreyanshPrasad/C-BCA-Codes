#include<stdio.h>
int main() {
	
	int i, sum = 0, arr[5];
	printf("Enter 5 elements in Array: ");
	for(i=0 ; i<5; i++) {
		scanf("%d", &arr[i]);
		sum += arr[i];
	}

	printf("Sum of Entered elements is %d", sum);
	return 0;
}