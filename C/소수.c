
#include <stdio.h>
int main() {

	int n, i, j;
	int score[100];
	int count = 0;
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d", &score[i]);
	}

	for (i = 0; i < n; i++) {
		for (j = 2; j < score[i]; j++) {
			if (score[i] % j == 0) break;
		}
		if (j == score[i]) count++;


	}
	printf("%d", count);
	return 0;
}
