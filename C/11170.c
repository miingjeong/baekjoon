
#include <stdio.h>

int main() {

	int T;
	int i,j;
	int count = 0;
	int N, M;
	int num;
	scanf("%d", &T);
	for (i = 0; i < T; i++)
	{
		scanf("%d %d", &N, &M);
		if (N == 0)
			count = 1;
		else
			count = 0;

		for (j = N; j <= M; j++) {
			
			num = j;
			while (num) {
				if (num % 10 == 0)
					count++;
				num /= 10;

				
			}
		}
		printf("%d\n", count);
	}
	return 0;	

}