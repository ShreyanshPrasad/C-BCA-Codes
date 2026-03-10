#include<stdio.h>
#include<string.h>

union Data{
	int i;
	float f;
	char name[30];
};

int main() {

	union Data d;
	//d.i = 3;
	//d.f = 3.14;
	strcpy(d.name, "Prince");

	printf("i = %d", d.i);
	printf("\nf = %f", d.f);
	printf("\nname = %s", d.name);

	return 0;
}