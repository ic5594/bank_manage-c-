#include <stdio.h>
#include<stdlib.h>
#include "Info.h"


int main () {
	int menu_Num;

	setNumOfAccount(0);

	while (1) {
		printf("1번 계좌 개설\n2번 입금\n3번 출금\n4번 조회\n0번 종료\n\n번호 선택 : ");
		scanf_s("%d", &menu_Num);
		getchar();

		switch (menu_Num)
		{
		case 1:
			printf("계좌 개설 선택\n");
			m_account();
			getchar();
			break;
		case 2:
			printf("입금 선택\n");
			deposit();
			getchar();
			break;
		case 3:
			printf("출금 선택\n");
			withdraw();
			getchar();
			break;
		case 4:
			printf("계좌 조회 선택\n");
			inquire();
			getchar();
			break;
		case 0:
			printf("프로그램 종료");
			return 0;
			break;
		}
		system("cls");
	}
	return 0;
}