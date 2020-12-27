#include <stdio.h> 



int main() {

	int i;
	long long int p[90] = { 0 };
	int N;


	p[0] = 0;
	p[1] = 1;

	scanf("%d", &N);

	for (i = 2; i <= N; i++)
		p[i] = p[i - 1] + p[i - 2];

	printf("%lld\n", p[N]);

	return 0;

}