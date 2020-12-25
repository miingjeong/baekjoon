#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

	srand((unsigned int)time(NULL));

	int a = rand() % 100, b = rand() % 100;

	printf("a의 값은 %d, b의 값은 %d이다.\n", a, b);
	
	printf("더 큰 수는 ");
	(a > b) ? printf("a이다") : printf("b이다");

	return 0;


}