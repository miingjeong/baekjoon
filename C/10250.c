#include <stdio.h>
#include <string.h>
int main() {

	int T, i;
	int H, W, N;
	scanf("%d", &T);

	for (i = 0; i < T; i++) {
		scanf("%d %d %d", &H, &W, &N);

		if (N % H == 0)
			printf("%d\n", H * 100 + (N / H));
		else
			printf("%d\n", (N % H) * 100 + (N / H + 1));
	}
	return 0;


}