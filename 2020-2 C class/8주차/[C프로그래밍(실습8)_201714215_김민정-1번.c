#include <stdio.h>
#include <stdlib.h>

int main() {
	int i = 0;

	printf("*** ������ �ζ� ��ȣ *** \n ");
	for (i = 0; i < 6; i++)
		printf("%d ", (rand() % 45 + 1));

	
}