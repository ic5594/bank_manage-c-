#include <stdio.h>
#include<stdlib.h>
#include "Info.h"


int main () {
	int menu_Num;

	setNumOfAccount(0);

	while (1) {
		printf("1�� ���� ����\n2�� �Ա�\n3�� ���\n4�� ��ȸ\n0�� ����\n\n��ȣ ���� : ");
		scanf_s("%d", &menu_Num);
		getchar();

		switch (menu_Num)
		{
		case 1:
			printf("���� ���� ����\n");
			m_account();
			getchar();
			break;
		case 2:
			printf("�Ա� ����\n");
			deposit();
			getchar();
			break;
		case 3:
			printf("��� ����\n");
			withdraw();
			getchar();
			break;
		case 4:
			printf("���� ��ȸ ����\n");
			inquire();
			getchar();
			break;
		case 0:
			printf("���α׷� ����");
			return 0;
			break;
		}
		system("cls");
	}
	return 0;
}