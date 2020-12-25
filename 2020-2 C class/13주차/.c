

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct farmer {
	int sheep;
	int horse;
};
struct marketPrice {
	int sheepPrice;
	int horsePrice;
};

void selling(struct farmer a, struct marketPrice b, int* sales) {
	printf("> �� %d����\n", a.sheep);
	printf("> �� %d����\n", a.horse);
	printf("> �� �ü� %d��\n", b.sheepPrice);
	printf("> �� �ü� %d��\n", b.horsePrice);
	*sales = a.sheep * b.sheepPrice + a.horse * b.horsePrice;
	return;
}

int main() {
	struct farmer Mark;
	struct marketPrice MP;
	int Sales;
	int* SalesPtr = &Sales;

	srand((unsigned int)time(NULL));

	// ����ü ��� ���� �ʱ�ȭ
	Mark.sheep = (rand() % 10 + 1);
	Mark.horse = (rand() % 10 + 1);
	MP.sheepPrice = (rand() % 100 + 101);
	MP.horsePrice = (rand() % 100 + 101);

	// �Լ� ȣ��
	selling(Mark, MP, SalesPtr);

	printf(">> �� ���� : %d�� \n\n", Sales);

	return 0;
}