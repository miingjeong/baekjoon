//201714215 김민정
#include <stdio.h>
int main()
{
	char a;
	printf("소문자 알파벳을 입력하시오: ");
	scanf_s("%c", &a);
	printf("변환된 알파벳 : %c", a-32);
	return 0;
}