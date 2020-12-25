#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	int i=0,j ,n,m,o, num,h;
	int lotto[5][9] = {
		{1,2,3,4,5,6,7,8,9},
		{10,11,12,13,14,15,16,17,18},
		{19,20,21,22,23,24,25,26,27},
		{28,29,30,31,32,33,34,35,36},
		{37,38,39,40,41,42,43,44,45}
	};

	int choice[6];
	int random[6];

	printf("   ★ 행운의 번호 6자리를 선택하세요! ★ \n");
	printf("+----------------------------------------------------+\n");
	for (m = 0; m < 5; m++)
	{
		for (n = 0; n < 9; n++)
		{
			printf("| %d |", lotto[m][n]);
		}
		printf("\n");
	}
	printf("+-----------------------------------------------------+\n");
	


	while (i<6) {

		
		printf("%d번째 번호 : ", i + 1);
		scanf_s("%d", &choice[i]);

			if (choice[i] > 45 || choice[i] < 0)
				{
					printf("범위를 벗어납니다. 다시 입력하세요!\n");
				}
			else if (choice[i - 1] == choice[i])
				{
					printf("동일한 숫자를 입력하였습니다. 다시 입력하세요!\n");
				}
			else
					i++;

	}
	




	printf("선택한 번호 : ");
	for (o = 0; o < 6; o++) {
		printf(" %d ", choice[o]);
	}
	printf("\n\n");




	//int random[6];
	for (j = 0; j < 6; j++)
	{
		random[j] = rand() % 45 + 1;
	}

	printf("생성된 번호 : ");
	for (o = 0; o < 6; o++) {
		printf(" %d ", random[o]);
	}
	printf("\n\n");


	num=compare(&choice, &random);

	printf("※ 축하합니다! 일치하는 수는 %d개 입니다. ※ \n", num);
	
	return 0;
}

int compare(int *choiceArray, int *randomArray)


{

	int h, b,count=0;
	for (h = 0; h < 6; h++) {
		for (b = 0; b < 6; b++) {
			if (choiceArray[h] == randomArray[b])
				count++;
		}
	}
	return count;



}



