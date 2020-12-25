

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
	printf("> 양 %d마리\n", a.sheep);
	printf("> 말 %d마리\n", a.horse);
	printf("> 양 시세 %d원\n", b.sheepPrice);
	printf("> 말 시세 %d원\n", b.horsePrice);
	*sales = a.sheep * b.sheepPrice + a.horse * b.horsePrice;
	return;
}

int main() {
	struct farmer Mark;
	struct marketPrice MP;
	int Sales;
	int* SalesPtr = &Sales;

	srand((unsigned int)time(NULL));

	// 구조체 멤버 변수 초기화
	Mark.sheep = (rand() % 10 + 1);
	Mark.horse = (rand() % 10 + 1);
	MP.sheepPrice = (rand() % 100 + 101);
	MP.horsePrice = (rand() % 100 + 101);

	// 함수 호출
	selling(Mark, MP, SalesPtr);

	printf(">> 총 매출 : %d원 \n\n", Sales);

	return 0;
}