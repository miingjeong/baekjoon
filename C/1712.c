#include <stdio.h>
int main() {

	int A, B, C;
	int cost, earning;
	int num = 1;

	scanf("%d %d %d", &A, &B, &C);


	if (C <= B)
		printf("-1\n");
	else
		printf("%d\n", A / (C - B) + 1);

	return 0;
}