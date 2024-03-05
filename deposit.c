#include "Info.h"
extern g_nNumOfAccount;

void deposit() {
	int i = 0;
	int in_money = 0;
	int tmp[20];

	printf("입금하려는 계좌 : ");
	scanf_s("%d", tmp, sizeof(tmp));

	printf("검색 결과\n");
	for (i = 0; i < getNumOfAccount(); i++) {
		if (strcmp(bank[i]->account, tmp) == 0) {
			printf("고객명 : %s\n", bank[i]->u_name);

			printf("입금 금액 : ");
			scanf_s("%d", &in_money);
			getchar();

			if (in_money >= 0) {
				bank[i]->balance = bank[i]->balance + in_money;
			}
			else
				printf("잘못된 금액 입력\n");
			return;
		}
	}
	if (getNumOfAccount() == 0)
		printf("계좌 없음\n");
	else
		printf("입금 완료");
}
