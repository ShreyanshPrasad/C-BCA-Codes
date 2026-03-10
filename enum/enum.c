#include<stdio.h>
enum weekdays {
	MON,
	TUES,
	WED,
	THURS = 5,
	FRI,
	SAT,
	SUN
};

int main() {
	enum weekdays sonal = TUES;

	printf("Day = %d", sonal);

	return 0;
}	