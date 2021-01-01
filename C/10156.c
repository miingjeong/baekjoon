#include <stdio.h> 

int main() {

	int a, b, c;
	int now = 0;
	scanf("%d %d %d", &a, &b, &c);

	now = a * b - c;

	if (now > 0)
		printf("%d\n", now);
	else
		printf("0\n");

	return 0;


}