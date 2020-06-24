#include <iostream>
using namespace std;

class BankAccount {

	double balance; //�ܰ�

public:
	int transfer(int amount, BankAccount& other); //�� ���·� ����ڰ� �Է��� �ݾ��� �ٸ����·κ��� ��ü�ϴ� �Լ�
	double getBalance() { //���� �ܰ� ��ȯ�ϴ� �Լ�
		return this->balance;
	}
	void setBalance(double b) { //���� �ܰ� �Ű������� �����ϴ� �Լ�
		this->balance = b;
	}
};

int BankAccount::transfer(int amount, BankAccount& other) { //�� ���·� ����ڰ� �Է��� �ݾ��� �ٸ����·κ��� ��ü�ϴ� �Լ�
	if (other.getBalance() - amount >= 0.0) { //�ٸ� �����ܰ� ����ڰ� �Է��� �ݾ׺��� ũ�ų� ���� ���
		this->setBalance(this->getBalance() + amount); //�� ���¿� �Է��� �ݾ��� ���� �ݾ��� ����
		other.setBalance(other.getBalance() - amount); //�ٸ� ���¿� �Է��� �ݾ��� �� �ݾ��� ����
		return 3;
	}
	else { //�ٸ� �����ܰ��� ��ü�ݾ��� ū ���
		cout << "�ܰ� ������ ��ü�� �� �����ϴ�." << endl;
		return 4;
	}
}

int main() {
	double balance; //��ü�ݾ�
	cout << "���ϴ� �ݾ��� ���� ���¿��� �ٸ� ���·� ��ü�ϴ� ���α׷�" << endl;
	cout << "��ü �ݾ��� �����Ͻÿ�. : ";
	cin >> balance; //����ڷκ��� ��ü�ݾ��� �Է¹���
	
	BankAccount b1, b2; //Ŭ���� ����
	b1.setBalance(10000); //�� ������ �ʱ� �ݾ��� 10,000������ ����
	b2.setBalance(10000); //�ٸ� ������ �ʱ� �ݾ� 10,000������ ����

	cout << "���� �ܾ�" << endl;
	cout << "�� ���� �ܾ� : " << b1.getBalance() << endl;
	cout << "�ٸ� ���� �ܾ� : " << b2.getBalance() << endl;
	 //�ٸ� ���¿��� �� ���·� balance ��ŭ ��ü�ϴ� �Լ�
	if (b1.transfer(balance, b2) == 3) { //��ü�� ������ ���
		cout << endl << "��ü �� �ܾ�" << endl;
		cout << "�� ���� �ܾ� : " << b1.getBalance() << endl;
		cout << "�ٸ� ���� �ܾ� : " << b2.getBalance() << endl;
	}//��ü�� �������� ������ ��ü�� �ܾ��� ������� ����

	system("pause");
	return 0;
}