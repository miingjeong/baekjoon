#include <stdio.h>
#include <stdlib.h>

char* get_word();

int main(void)
{
    char* p;
    p = get_word();
    printf("문장: %s\n", p);
    free(p); 
    return 0;
}
char* get_word()
{
    char* s;
    s = (char*)malloc(sizeof(char) * 20);
    if (s == NULL)
    {
        printf("메모리할당오류\n");
        exit(1);
    }
    printf("문장을 입력하시오(최대20): ");
    gets(s);
    return s;
}


