#include "Info.h"
extern g_nNumOfAccount;

void deposit() {
	int i = 0;
	int in_money = 0;
	int tmp[20];

	printf("�Ա��Ϸ��� ���� : ");
	scanf_s("%d", tmp, sizeof(tmp));

	printf("�˻� ���\n");
	for (i = 0; i < getNumOfAccount(); i++) {
		if (strcmp(bank[i]->account, tmp) == 0) {
			printf("���� : %s\n", bank[i]->u_name);

			printf("�Ա� �ݾ� : ");
			scanf_s("%d", &in_money);
			getchar();

			if (in_money >= 0) {
				bank[i]->balance = bank[i]->balance + in_money;
			}
			else
				printf("�߸��� �ݾ� �Է�\n");
			return;
		}
	}
	if (getNumOfAccount() == 0)
		printf("���� ����\n");
	else
		printf("�Ա� �Ϸ�");
}
