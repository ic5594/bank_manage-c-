#include "Info.h"

static int g_nNumOfAccount;

void setNumOfAccount(int num) {

	if (num < 0 || num > MAX_ACCOUNT) {
		printf("�Է��� �� ���� ���� ����");
		return;
	}

	g_nNumOfAccount = num;
}

void increaseNumOfAccount() {

	if (g_nNumOfAccount < MAX_ACCOUNT) {
		g_nNumOfAccount++;
	}
	else {
		printf("����");
	}
}

int getNumOfAccount() {
	return g_nNumOfAccount;
}


void m_account() {
	char u_name[100];//�̸�
	int account[100];
	int money;
	int balance;//�ܾ�
	int cnt = 0;

	if (g_nNumOfAccount > MAX_ACCOUNT) {
		printf("���� ������ �Ѽ��� 1000���Դϴ�. �� �̻� ���¸� ������ �� �����ϴ�");
		return;
	}

	cnt = g_nNumOfAccount; //���� ������ ������ �� ������ cnt�� ����

	bank[cnt] = (Bank*)malloc(sizeof(Bank));
	

	printf("�̸� �Է� : ");
	scanf_s("%s", &bank[cnt]->u_name,sizeof(u_name));
	/*gets(bank[cnt]->name);*/

	printf("���� �Է� : ");
	scanf_s("%d", &bank[cnt]->account);

	printf("�ܾ� �Է� : ");
	scanf_s("%d", &bank[cnt]->balance);


	g_nNumOfAccount++;
}