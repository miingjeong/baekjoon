
#include <stdio.h> 

int main() {

	int M, D;
	scanf("%d", &M);
	scanf("%d", &D);

	if (M < 2)
		printf("Before\n");

	else if (M == 2 && D < 18)
		printf("Before\n");

	else if (M == 2 && D == 18)
		printf("Special\n");

	else if (M == 2 && D > 18)
		printf("After\n");

	else
		printf("After\n");

	return 0;

}