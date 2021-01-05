#include <stdio.h>

int main() {

	int e, f, c;
	int drink = 0;
	int change = 0;
	int unchange = 0;
	scanf("%d %d %d", &e, &f, &c);

	e += f;
	while (e >= c) {
		change = e / c;
		unchange = e % c;
		drink += change;
		e = change + unchange;
	}
	printf("%d\n", drink);
	return 0;

}