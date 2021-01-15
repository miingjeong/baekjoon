#include <stdio.h>
#include <string.h>
int main() {

	int ans;
	int num[31] = { 0 };

	for (int i = 0; i < 28; i++) {

		scanf("%d", &ans);
		num[ans-1] = 1;

	}


	for (int j = 0; j < 30; j++) {
		if (num[j] == 0)
			printf("%d\n", j + 1);
	}
	return 0;
}
