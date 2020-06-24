#include <iostream>
using namespace std;
class Food {
	//��� ����(����, ��������, ����)
	double calory = 0;
	double price = 0;
	double weight = 0;

public:
	//������
	Food(double c, double p, double w) : calory(c), price(p), weight(w) {
		cout << "Food  ������" << endl;
	}
	//�Ҹ���
	~Food() {
		cout << "Food  �Ҹ���" << endl;
	}

	//��������� �����ڿ� ������
	double getCalory() {
		return calory;
	}
	double getPrice() {
		return price;
	}
	double getWeight() {
		return weight;
	}
	void setCalory(double c) {
		calory = c;
	}
	void setPrice(double p) {
		price = p;
	}
	void setWeight(double w) {
		weight = w;
	}
};

class Melon :public Food { //Food  Ŭ���� ���
	//��� ����(�߸���)
	string info;


public:
	//������
	Melon(double c, double p, double w, string i)
		:Food(c,p,w), info(i)
	{
		//��ӹ��� Food  �� ������ Melon Ŭ���� �� ���� �ʱ�ȭ
		cout << "Melon ������" << endl;
	}
	//�Ҹ���
	~Melon() {
		cout << "Melon �Ҹ���" << endl;
	}
	//�����ڿ� ������
	string getInfo() {
		return info;
	}

	void setInfo(string i) {
		info = i;
	}

	void display();
	//��ӹ��� ��������� Food  ��������� ���¸� ����ϴ� �Լ�
};

void Melon::display() {
	cout << "\n======================================" << endl;
	cout << "Į�θ� : " << this->getCalory() << endl;
	cout << "���� : " << this->getPrice() << endl;
	cout << "�߷� : " << this->getWeight() << endl;
	cout << "���� ��� ���� : " << this->getInfo() << endl;

	cout << "======================================\n" << endl;

}

int main() {

	//Ŭ���� ����
	Melon m(300,15000,1,"õ�� ��õ");
	m.display(); //���� ���� ���

	cout << "����, ���� ��� ���� ����" << endl;
	m.setPrice(20000);
	m.setInfo("õ�� �ϸ�");

	m.display();//���� ���� ���

	system("pause");
	return 0;
}