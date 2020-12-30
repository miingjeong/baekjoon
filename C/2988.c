#include <stdio.h>
 
int main()
{
    int n, len;
    char arr[70];
    
    scanf("%d", &n);
 
    for (int i = 0; i < n; i++)
    {
        scanf("%s", arr);
        len = strlen(arr);
 
        if (arr[len - 1] % 2 == 0)
            printf("even\n");
 
        else if (arr[len - 1] % 2 == 1)
            printf("odd\n");        
    }
    
    return 0;
}


출처: https://www.crocus.co.kr/386 [Crocus]