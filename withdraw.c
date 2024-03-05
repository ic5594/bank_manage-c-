#include "Info.h"
extern g_nNumOfAccount;

void withdraw() {
	int i = 0;
	int out_money = 0;
	int tmp[20];

	printf("출금하려는 계좌 : ");
	scanf_s("%d", tmp, sizeof(tmp));

	printf("검색 결과\n");
	for (i = 0; i < getNumOfAccount(); i++) {
		if (strcmp(bank[i]->account, tmp) == 0) {
			printf("고객명 : %s\n", bank[i]->u_name);

			printf("출금 금액 : ");
			scanf_s("%d", &out_money);
			getchar();

			if (bank[i]->balance > 0) {
				bank[i]->balance = bank[i]->balance - out_money;
			}
			else if(out_money > bank[i]->balance) {
				printf("잔액 부족\n");
				return;
			}
		}
	}
	if (getNumOfAccount() == 0)
		printf("계좌 없음\n");
	else
		printf("출금 완료");
}
