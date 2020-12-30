#include <stdio.h>


int main() {
	int N;
	int i;
	int a;
	scanf("%d", &N);

	a = (N / 2 + 1);
	if (N % 2 == 0)
		printf("%d\n", a * a);
	else
		printf("%d\n", a * (a + 1));

	return 0;



}