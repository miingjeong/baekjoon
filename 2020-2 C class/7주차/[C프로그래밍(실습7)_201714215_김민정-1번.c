#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

	srand((unsigned int)time(NULL));

	int a = rand() % 100, b = rand() % 100;

	printf("a�� ���� %d, b�� ���� %d�̴�.\n", a, b);
	
	printf("�� ū ���� ");
	(a > b) ? printf("a�̴�") : printf("b�̴�");

	return 0;


}