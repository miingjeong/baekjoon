#include <stdio.h>
int main() {

	int N;
	int i, j;
	scanf("%d", &N);

	for (i = 0; i <= N; i++) {
		for (j = 0; j <= N; j++) {
			if (3 * i + 5 * j == N) {
				printf("%d\n", i + j);
				return 0;
			}
		}
	}

	printf("-1\n");

	return 0;
}