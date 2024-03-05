typedef struct Bank {
	char u_name[100]; //°í°´¸í
	int account[100]; //°èÁÂ
	int balance;//ÀÜ¾×
}Bank;


#define MAX_ACCOUNT  1000

Bank* bank[MAX_ACCOUNT];

void m_account();//°èÁÂ °³¼³
void deposit();//ÀÔ±İ
void withdraw();//Ãâ±İ
void inquire();//°èÁÂ Á¶È¸


int getNumOfAccount();
void increaseNumOfAccount();
void setNumOfAccount(int num);

int getNumOfSearchAccount();
void increaseNumOfSearchAccount();
void setNumOfSearchAccount();

