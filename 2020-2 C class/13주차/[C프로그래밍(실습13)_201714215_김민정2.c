#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void choiceNumber(int lotto[][9])
{
    int i, j, n;
    int index[6][2];
    int val[6];

    i = rand() % 5;
    j = rand() % 9;
    for (n = 0; n < 6; n++) {
        while (lotto[i][j] == 0) {
            i = rand() % 5;
            j = rand() % 9;
        }
        index[n][0] = i;
        index[n][1] = j;
        val[n] = lotto[i][j];
        lotto[i][j] = 0;
    }

    for (i = 0; i < 5; i++)
        for (j = 0; j < 9; j++)
            lotto[i][j] = 0;

    for (n = 0; n < 6; n++)
        lotto[index[n][0]][index[n][1]] = val[n];
}
int main()
{
    srand(time(NULL));
    int i = 0, j, n, m, o, num, h;
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

    printf("\n");
    printf("\n");


    choiceNumber(lotto);

    printf("******* 번호를 선택합니다. *******\n");
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

    return 0;
}