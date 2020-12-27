#include <stdio.h> 

int han(int n) {

	int A, B, C;
	int count = 0;

	if (n < 100)
		return n;
	else {
		for (int i = 100; i <= n; i++) {
			A = i / 100;
			B = (i / 10) % 10;
			C = (i % 10) % 10;

			if ((A - B) == (B - C))
				count++;

		}

		return (99 + count);
	}

}

int main() {
	int ans;
	int num;
	scanf("%d", &num);

	ans = han(num);
	printf("%d\n", ans);


	return 0;
}