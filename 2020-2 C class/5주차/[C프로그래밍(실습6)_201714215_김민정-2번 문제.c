//201714215 �����
#include <stdio.h>
int main()
{
	int t;

	printf("���� �ð��� ����Դϱ�?: ");
	scanf_s("%d", &t);

	if (6 <= t && t<= 11)
		printf("Good morning!");
	else if (12 <= t && t <= 17)
		printf("Good afternoon!");
	else if (18 <= t && t<= 21)
		printf("Good evening!");
	else
		printf("Good night!");

	return 0;
}