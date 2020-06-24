#include <iostream>
using namespace std;
class Person {
	//��� ����(�̸�, �ּ�, ��ȭ��ȣ)
	string name = "";
	string address = "";
	string phone = "";
		
public :
	//������
	Person(string n, string a, string p) : name(n), address(a), phone(p) {
			cout << "Person ������" << endl;
	}
	//�Ҹ���
	~Person() {
		cout << "Person �Ҹ���" << endl;
	}

	//��������� �����ڿ� ������
	string getName() {
		return name;
	}
	string getAddress() {
		return address;
	}
	string getPhone() {
		return phone;
	}
	void setName(string n) {
		name = n;
	}
	void setAddress(string a) {
		address = a;
	}
	void setPhone(string p) {
		phone = p;
	}
};

class Customer:public Person { //Person Ŭ���� ���
	//��� ����(�� ��ȣ, ���ϸ���)
	string customerNum;
	double mileage;

public :
	//������
	Customer(string n, string a, string p, string cn, double m) 
		:Person(n,a,p), customerNum(cn), mileage(m)
	{
		//��ӹ��� Person �� ������ Customer Ŭ���� �� ���� �ʱ�ȭ
		cout << "Customer ������" << endl;
	}
	//�Ҹ���
	~Customer() {
		cout << "Customer �Ҹ���" << endl;
	}
	//�����ڿ� ������
	string getCustonmerNum() {
		return customerNum;
	}
	double getMileage() {
		return mileage;
	}
	void setCustomerNum(string cn) {
		customerNum = cn;
	}
	void setMileage(double m) {
		mileage = m;
	}
	void display(); 
	//��ӹ��� ��������� Customer ��������� ���¸� ����ϴ� �Լ�
};

void Customer::display() {
	cout << "\n======================================" << endl;
	cout << "�̸� : " << this->getName() << endl;
	cout << "�ּ� : " << this->getAddress() << endl;
	cout << "�ڵ�����ȣ : " << this->getPhone() << endl;
	cout << "����ȣ : " << this->getCustonmerNum() << endl;
	cout << "���ϸ��� : " << this->getMileage() << endl;
	cout << "======================================\n" << endl;

}

int main() {

	//Ŭ���� ����
	Customer c("�̿���", "��û���� ��õ", "010-1111-2222", "2017136082", 10000);
	c.display(); //���� ���� ���

	cout << "�ڵ�����ȣ, ���ϸ��� ����" << endl;
	c.setPhone("010-2222-3333");
	c.setMileage(20000);

	c.display();//���� ���� ���

	system("pause");
	return 0;
}