#include <stdio.h>
int main() {

	char a;
	int b;
	double c;

	
	switch (sizeof(a)) {
	case sizeof(char):
		printf("�ش� ������ �������Դϴ�.\n");
		break;
	case sizeof(int):
		printf("�ش� ������ �������Դϴ�.\n");
		break;
	case sizeof(double):
		printf("�ش� ������ �Ǽ����Դϴ�.\n");
		break;
	}
	
	switch (sizeof(a)) {
	case sizeof(char):
		printf("�ش� ������ �������Դϴ�.\n");
		break;
	case sizeof(int):
		printf("�ش� ������ �������Դϴ�.\n");
		break;
	case sizeof(double):
		printf("�ش� ������ �Ǽ����Դϴ�.\n");
		break;
		}

	switch (sizeof(a)) {
	case sizeof(char):
		printf("�ش� ������ �������Դϴ�.\n");
		break;
	case sizeof(int):
		printf("�ش� ������ �������Դϴ�.\n");
		break;
	case sizeof(double):
		printf("�ش� ������ �Ǽ����Դϴ�.\n");
		break;
	
	}

}