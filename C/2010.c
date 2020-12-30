#include <stdio.h>
int main() {

	int N;
	int i;
	int sum = 0;
	int hole[500000] = { 0 };

	scanf("%d", &N);

	for (i = 0; i < N; i++) {
		scanf("%d", &hole[i]);
	}


	for (i = 0; i < N - 1; i++)
		sum += (hole[i] - 1);

	sum = sum + hole[N - 1];

	printf("%d\n", sum);

	return 0;
}