#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

#include <stdio.h> 

int main() {

    int N;
    int i, j;
    int num[1000] = { 0 };
    int tmp;

    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        scanf("%d", &num[i]);
    }


    for (i = 0; i < N - 1; i++) {
        for (j = 0; j < N-1; j++) {
            if (num[j] > num[j + 1]) {
                tmp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = tmp;
            }
        }
    }



    for (i = 0; i < N; i++)
        printf("%d\n", num[i]);

    return 0;

}