#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {

    FILE* fp;
    char name[100];
    char number[100];
    char line[200];
    int cnt = 0;

    printf(" 파일을 열어 학번과 이름을 입력 받는다. \n\n");

    fp = fopen("buffer.txt", "w");

    printf(">이름을 입력하시오. : ");
    scanf("%s", name);
    fputs(name, fp);
    fputs(" ", fp);

    printf(">학번을 입력하시오. : ");
    scanf("%s", number);
    fputs(number, fp);


    fclose(fp);

    printf("\n\n");
    printf(" 파일을 다시 열어 학번과 이름을 출력한다. \n\n");

    fp = fopen("buffer.txt", "r");
    fgets(line, 200, fp);
    fclose(fp);


    sscanf(line, "%s %s", name, number);
    printf("> 이름 : %s\n", name);
    printf("> 학번 : %s\n", number);


    while (line[cnt] != NULL) {
        cnt++;
    }
    printf("총 문자수 %d\n", cnt);

    return 0;
}