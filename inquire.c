#include "Info.h"
extern g_nNumofAccount;

void inquire() {
	int i = 0;
	int tmp[20];

	printf("�˻��� ���� �Է� : ");
	scanf_s("%d", tmp, sizeof(tmp));

	printf("�˻� ���\n");
	for (i = 0; i < getNumOfAccount(); i++) {
		if (strcmp(bank[i]->account, tmp) == 0) {
			printf("���� : %s\n", bank[i]->u_name);
			printf("�ܾ� : %d\n", bank[i]->balance);
			getchar();
		}
	}
	if (getNumOfAccount() == 0)
		printf("���� ����");
	else
		printf("��ȸ �Ϸ�");
}