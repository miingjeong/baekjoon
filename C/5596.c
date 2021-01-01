#include <stdio.h> 

int main() {

	int i;
	int min_sum = 0, man_sum = 0;
	int min[5] = { 0 };
	int man[5] = { 0 };


	for (i = 0; i < 4; i++) {
		scanf("%d", &min[i]);
		min_sum += min[i];
	}
	for (i = 0; i < 4; i++) {
		scanf("%d", &man[i]);
		man_sum += man[i];
	}

	if (min_sum > man_sum)
		printf("%d\n", min_sum);
	else if (min_sum == man_sum)
		printf("%d\n", min_sum);
	else
		printf("%d\n", man_sum);

	return 0;


}