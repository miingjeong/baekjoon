#include <stdio.h>
int main() {

	int N, F;
	int num;
	int k;
	int i;
	int n = 0;
	int count = 0;

	scanf("%d", &N);
	scanf("%d", &F);

	N = (N / 100) * 100;

	k = N;
	for (i = 0; i < 100; i++) {

		if (k % F == 0) {

			break;
		}
		k += 1;

	}
	if (i < 10)
		printf("0");

	printf("%d", i);

	return 0;

}