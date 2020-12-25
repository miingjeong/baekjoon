//201714215 김민정
#include <stdio.h>
int main(void)
{
	int a, b;
	int c;

	printf("두 수를 차례대로 입력하시오.: ");
	scanf_s("%d %d", &a, &b);

	c = b % a;
	if (c == 0)
		printf("B는 A의 %d배수 입니다.", b/a);
	else
		printf("B는 A의 배수가 아닙니다");

	return 0;


}