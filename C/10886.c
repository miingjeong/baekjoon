#include <stdio.h>

int main() {

	int testcase;
	int i;
	int student[101] = { 0 };
	int cute = 0, notcute = 0;
	scanf("%d", &testcase);

	for (i = 0; i < testcase; i++)
		scanf("%d", &student[i]);

	for (i = 0; i < testcase; i++) {
		if (student[i] == 0) {
			notcute++;
		}
		else {
			cute++;
		}
	}

	if (notcute > cute)
		printf("Junhee is not cute!\n");
	else
		printf("Junhee is cute!\n");

	return 0;


}