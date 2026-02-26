#include<stdio.h>

void sonal() {

	static int i;
	
	printf("Sonal %d\n", ++i);
	
}

int main() {
	sonal();
	sonal();
	sonal();
	sonal();
	sonal();
	sonal();

	return 0;

}