#include <stdio.h>

int main() {

	int N, K;
	int i;
	int top = 1,down=1;
	scanf("%d %d", &N, &K);

	for (i = N; i >= N-K+1; i--) {
		top = top * i;
			
	}
	

	for (i = K; i >=1; i--) {
		down = down * i;
	}

	printf("%d\n", top / down);

	return 0;

}