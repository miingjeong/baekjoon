#include <stdio.h>
#include <stdlib.h>

char* get_word();

int main(void)
{
    char* p;
    p = get_word();
    printf("����: %s\n", p);
    free(p); 
    return 0;
}
char* get_word()
{
    char* s;
    s = (char*)malloc(sizeof(char) * 20);
    if (s == NULL)
    {
        printf("�޸��Ҵ����\n");
        exit(1);
    }
    printf("������ �Է��Ͻÿ�(�ִ�20): ");
    gets(s);
    return s;
}


