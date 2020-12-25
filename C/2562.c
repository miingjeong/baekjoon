#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

#include <stdio.h>
#define SIZE 9

int main(void)
{
    int i;
    int max = 0;
    int num[SIZE];
    for (i = 0; i < SIZE; i++) {
        scanf("%d", &num[i]);
    }

    for (i = 0; i < SIZE; i++) {
        if (max < num[i]) {
            max = num[i];
        }
    }

    printf("%d\n", max);

    for (i = 0; i < SIZE; i++)
        if (max == num[i])
            printf("%d", i + 1);


    return 0;


}


