#include <stdio.h>
#include <conio.h>
#pragma warning(disable:4996);
#include <time.h>



int main() {

	srand((unsigned)time(NULL));
	char name[100];
	char code[100];
	char phone[100];
	char gender[100];
	
	printf("***** Make Secret Identity ******");
	printf(">   Name : ");
	setName(name);
	printf(">   Code : ");
	setCoide(code);
	printf(">   Phone : ");
	setPhone(phone);
	printf(">   Gender : ");
	setGender(gender, code);


}

//�̸��� ����� �Լ�
void setName(char* name) {

	int i;
	char name=0;
	while (i < 6)
		name = _getch();


		_putch(name);
	i++;



	}
	


//�ֹι�ȣ ���� �Լ�
void setCoid(char* code) {

	int i, num, sex;
	for (i = 0; i < 6; i++) {
		num = rand() % 9 + 1;
		getchar("%d", num);
	}
	getchar("-");
	
	sex = rand() % 2 + 1;
	getchar("%d", sex);

	for (i = 0; i < 5; i++) {
		num = rand() % 9 + 1;
		getchar("%d", num);
	}

	putchar(code);

}

//��ȭ��ȣ ���� �Լ�
void setPhone(char* phone) {

	int i,num;
	
		getchar("010-");
		for (i = 0; i < 4; i++) {
			num = rand() % 10;
			getchar("%d", num);


		}
		getchar("-");
		for (i = 0; i < 4; i++) {
			num = rand() % 10;
			getchar("%d", num);
		}

		putchar(phone);
}

//������ �Է��ϴ� ���
void setGender(char*gender, char*code){



}