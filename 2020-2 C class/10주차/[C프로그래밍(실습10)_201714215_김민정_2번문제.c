#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int classify(int random)
{
	random = rand() % 100 + 1;
	if (random % 2 == 0)
		return random;


}

int sum(int random)
{
	int summ = 0;
	summ = summ + classify();
}

int main() {

	int i;


	srand(time(NULL));
	printf("** 20개의 난수 중 발생한 짝수 :");

	for (i = 0; i < 20; i++) {

		printf("%d\n", classify());
	}

	printf("**난수의 합계: ");
	printf("%d", sum());

	return 0;

}
