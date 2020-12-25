#include <stdio.h>
int main() {

	char a;
	int b;
	double c;

	
	switch (sizeof(a)) {
	case sizeof(char):
		printf("해당 변수는 문자형입니다.\n");
		break;
	case sizeof(int):
		printf("해당 변수는 정수형입니다.\n");
		break;
	case sizeof(double):
		printf("해당 변수는 실수형입니다.\n");
		break;
	}
	
	switch (sizeof(a)) {
	case sizeof(char):
		printf("해당 변수는 문자형입니다.\n");
		break;
	case sizeof(int):
		printf("해당 변수는 정수형입니다.\n");
		break;
	case sizeof(double):
		printf("해당 변수는 실수형입니다.\n");
		break;
		}

	switch (sizeof(a)) {
	case sizeof(char):
		printf("해당 변수는 문자형입니다.\n");
		break;
	case sizeof(int):
		printf("해당 변수는 정수형입니다.\n");
		break;
	case sizeof(double):
		printf("해당 변수는 실수형입니다.\n");
		break;
	
	}

}