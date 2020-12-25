#include <stdio.h>

int main() {

	int a;
	double inch;
	printf("inch를 입력하시오 : ");
	scanf("%d,\n", &a);
	inch = a * 0.025;
	printf("%d 인치는 %lf 미터 입니다.", a, inch);

	return 0;

}