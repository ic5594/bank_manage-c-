#include "Info.h"

static int g_nNumOfAccount;

void setNumOfAccount(int num) {

	if (num < 0 || num > MAX_ACCOUNT) {
		printf("입력할 수 없는 개수 오류");
		return;
	}

	g_nNumOfAccount = num;
}

void increaseNumOfAccount() {

	if (g_nNumOfAccount < MAX_ACCOUNT) {
		g_nNumOfAccount++;
	}
	else {
		printf("오류");
	}
}

int getNumOfAccount() {
	return g_nNumOfAccount;
}


void m_account() {
	char u_name[100];//이름
	int account[100];
	int money;
	int balance;//잔액
	int cnt = 0;

	if (g_nNumOfAccount > MAX_ACCOUNT) {
		printf("현재 계좌의 총수가 1000개입니다. 더 이상 계좌를 개설할 수 없습니다");
		return;
	}

	cnt = g_nNumOfAccount; //현재 개설된 계좌의 총 개수를 cnt에 저장

	bank[cnt] = (Bank*)malloc(sizeof(Bank));
	

	printf("이름 입력 : ");
	scanf_s("%s", &bank[cnt]->u_name,sizeof(u_name));
	/*gets(bank[cnt]->name);*/

	printf("계좌 입력 : ");
	scanf_s("%d", &bank[cnt]->account);

	printf("잔액 입력 : ");
	scanf_s("%d", &bank[cnt]->balance);


	g_nNumOfAccount++;
}