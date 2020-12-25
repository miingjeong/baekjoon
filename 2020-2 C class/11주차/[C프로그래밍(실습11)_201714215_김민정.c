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

	printf("   �� ����� ��ȣ 6�ڸ��� �����ϼ���! �� \n");
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

		
		printf("%d��° ��ȣ : ", i + 1);
		scanf_s("%d", &choice[i]);

			if (choice[i] > 45 || choice[i] < 0)
				{
					printf("������ ����ϴ�. �ٽ� �Է��ϼ���!\n");
				}
			else if (choice[i - 1] == choice[i])
				{
					printf("������ ���ڸ� �Է��Ͽ����ϴ�. �ٽ� �Է��ϼ���!\n");
				}
			else
					i++;

	}
	




	printf("������ ��ȣ : ");
	for (o = 0; o < 6; o++) {
		printf(" %d ", choice[o]);
	}
	printf("\n\n");




	//int random[6];
	for (j = 0; j < 6; j++)
	{
		random[j] = rand() % 45 + 1;
	}

	printf("������ ��ȣ : ");
	for (o = 0; o < 6; o++) {
		printf(" %d ", random[o]);
	}
	printf("\n\n");


	num=compare(&choice, &random);

	printf("�� �����մϴ�! ��ġ�ϴ� ���� %d�� �Դϴ�. �� \n", num);
	
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



