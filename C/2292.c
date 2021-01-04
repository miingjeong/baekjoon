#include <stdio.h>

int main() {

	int n, i = 2, j = 5, cnt = 2;

	scanf("%d", &n);
	if (n == 1)
	{
		printf("1\n");
		return 0;
	}
	while (1)
	{
		if (i <= n && i + j >= n)
		{
			printf("%d\n", cnt);
				break;
		}
		i = i + j + 1;
		j += 6;
		cnt++;


	}
	return 0;
}