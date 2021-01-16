#include <stdio.h>

int div(int n) {
	int i;
	i = 2;//초기 2로 설정
	while(1){
		
		if (n == 1) //1인경우 출력 x 
			break;
		
		if (n % i == 0) {  
			printf("%d\n", i);
			n = n / i; 

			
		}
		else i++; //2에서 하나씩 증가

	
	}
	return 0;
}




int main() {
	
	int n;
	

	scanf("%d", &n);
	div(n);
	return 0;
		
}