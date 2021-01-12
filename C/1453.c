#include <stdio.h>

int main() {

	int N;
	int i, j;
	int arr[101] = { 0 };
	int seat_num;
	int bye_cnt = 0;

	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%d", &seat_num);
		if (arr[seat_num] == 1) //이미 1 채워져 있으면 카운트 
			bye_cnt++;
		arr[seat_num] = 1; //1로 채워두기
	}
	printf("%d\n", bye_cnt);
	return 0;
}