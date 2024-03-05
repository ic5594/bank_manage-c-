#include "Info.h"
extern g_nNumofAccount;

void inquire() {
	int i = 0;
	int tmp[20];

	printf("검색할 계좌 입력 : ");
	scanf_s("%d", tmp, sizeof(tmp));

	printf("검색 결과\n");
	for (i = 0; i < getNumOfAccount(); i++) {
		if (strcmp(bank[i]->account, tmp) == 0) {
			printf("고객명 : %s\n", bank[i]->u_name);
			printf("잔액 : %d\n", bank[i]->balance);
			getchar();
		}
	}
	if (getNumOfAccount() == 0)
		printf("계좌 없음");
	else
		printf("조회 완료");
}