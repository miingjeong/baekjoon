#include <stdio.h>
int main(void) {
	int a;
	int b;
	int num;

	printf("피라미드 층 수를 입력하시오.: ");
	scanf_s("%d", &num);
	for (a = 0; a < num; a++) {
		for (b = 0; b <= num-1-a; b++) {
			printf(" ");
		}
		for (b= 0; b < a * 2+1; b++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
	
}