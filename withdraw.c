#include "Info.h"
extern g_nNumOfAccount;

void withdraw() {
	int i = 0;
	int out_money = 0;
	int tmp[20];

	printf("����Ϸ��� ���� : ");
	scanf_s("%d", tmp, sizeof(tmp));

	printf("�˻� ���\n");
	for (i = 0; i < getNumOfAccount(); i++) {
		if (strcmp(bank[i]->account, tmp) == 0) {
			printf("���� : %s\n", bank[i]->u_name);

			printf("��� �ݾ� : ");
			scanf_s("%d", &out_money);
			getchar();

			if (bank[i]->balance > 0) {
				bank[i]->balance = bank[i]->balance - out_money;
			}
			else if(out_money > bank[i]->balance) {
				printf("�ܾ� ����\n");
				return;
			}
		}
	}
	if (getNumOfAccount() == 0)
		printf("���� ����\n");
	else
		printf("��� �Ϸ�");
}
