typedef struct Bank {
	char u_name[100]; //����
	int account[100]; //����
	int balance;//�ܾ�
}Bank;


#define MAX_ACCOUNT  1000

Bank* bank[MAX_ACCOUNT];

void m_account();//���� ����
void deposit();//�Ա�
void withdraw();//���
void inquire();//���� ��ȸ


int getNumOfAccount();
void increaseNumOfAccount();
void setNumOfAccount(int num);

int getNumOfSearchAccount();
void increaseNumOfSearchAccount();
void setNumOfSearchAccount();

