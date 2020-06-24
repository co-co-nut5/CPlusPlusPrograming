#include <iostream>
using namespace std;

class BankAccount {

	double balance; //잔고

public:
	int transfer(int amount, BankAccount& other); //내 계좌로 사용자가 입력한 금액을 다른계좌로부터 이체하는 함수
	double getBalance() { //현재 잔고를 반환하는 함수
		return this->balance;
	}
	void setBalance(double b) { //현재 잔고를 매개변수로 설정하는 함수
		this->balance = b;
	}
};

int BankAccount::transfer(int amount, BankAccount& other) { //내 계좌로 사용자가 입력한 금액을 다른계좌로부터 이체하는 함수
	if (other.getBalance() - amount >= 0.0) { //다른 계좌잔고가 사용자가 입력한 금액보다 크거나 같을 경우
		this->setBalance(this->getBalance() + amount); //내 계좌에 입력한 금액을 더한 금액을 설정
		other.setBalance(other.getBalance() - amount); //다른 계좌에 입력한 금액을 뺀 금액을 설정
		return 3;
	}
	else { //다른 계좌잔고보다 이체금액이 큰 경우
		cout << "잔고가 부족해 이체할 수 없습니다." << endl;
		return 4;
	}
}

int main() {
	double balance; //이체금액
	cout << "원하는 금액을 현재 계좌에서 다른 계좌로 이체하는 프로그램" << endl;
	cout << "이체 금액을 설정하시오. : ";
	cin >> balance; //사용자로부터 이체금액을 입력받음
	
	BankAccount b1, b2; //클래스 선언
	b1.setBalance(10000); //내 계좌의 초기 금액을 10,000원으로 설정
	b2.setBalance(10000); //다른 계좌의 초기 금액 10,000원으로 설정

	cout << "원래 잔액" << endl;
	cout << "내 계좌 잔액 : " << b1.getBalance() << endl;
	cout << "다른 계좌 잔액 : " << b2.getBalance() << endl;
	 //다른 계좌에서 내 계좌로 balance 만큼 이체하는 함수
	if (b1.transfer(balance, b2) == 3) { //이체에 성공한 경우
		cout << endl << "이체 후 잔액" << endl;
		cout << "내 계좌 잔액 : " << b1.getBalance() << endl;
		cout << "다른 계좌 잔액 : " << b2.getBalance() << endl;
	}//이체에 성공하지 않으면 이체후 잔액을 출력하지 않음

	system("pause");
	return 0;
}