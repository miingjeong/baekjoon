#include <stdio.h>
int main()
{
	char a=3000, b=2000; //char의 범위는 -128~126이므로 오버플로우 발생
	printf("a의 입력값은 3000\n");
	printf("b의 입력값은 2000\n");

	printf("a와 b의 곱은 %d", a * b);

	return 0;

}