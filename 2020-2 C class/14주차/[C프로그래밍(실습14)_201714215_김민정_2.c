#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {

    FILE* fp;
    char name[100];
    char number[100];
    char line[200];
    int cnt = 0;

    printf(" ������ ���� �й��� �̸��� �Է� �޴´�. \n\n");

    fp = fopen("buffer.txt", "w");

    printf(">�̸��� �Է��Ͻÿ�. : ");
    scanf("%s", name);
    fputs(name, fp);
    fputs(" ", fp);

    printf(">�й��� �Է��Ͻÿ�. : ");
    scanf("%s", number);
    fputs(number, fp);


    fclose(fp);

    printf("\n\n");
    printf(" ������ �ٽ� ���� �й��� �̸��� ����Ѵ�. \n\n");

    fp = fopen("buffer.txt", "r");
    fgets(line, 200, fp);
    fclose(fp);


    sscanf(line, "%s %s", name, number);
    printf("> �̸� : %s\n", name);
    printf("> �й� : %s\n", number);


    while (line[cnt] != NULL) {
        cnt++;
    }
    printf("�� ���ڼ� %d\n", cnt);

    return 0;
}