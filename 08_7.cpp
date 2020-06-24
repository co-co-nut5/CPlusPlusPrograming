#include <iostream>
#include <string>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

class Product { //�θ� Ŭ����
	//��� ����(�̸�, ����)
	string name;
	double price;
public:
	//Product ������
	Product(string n, double p) : name(n), price(p) {
		cout << "Product ������" << endl;
	}

	//���� ��������� ������ �� ������
	string getName() { return name; } //�̸� ������
	void setName(string n) { name = n; } //�̸� ������
	double getPrice() { return price; } //���� ������
	void setPrice(double p) { price = p; } //���� ������

	//���� Ŭ������ ����Լ��� ���
	void print() {
		cout << "============================================" << endl;
		cout << "��ǰ �̸� : " << getName() << endl;
		cout << "���� : " << getPrice() << endl;
		cout << "============================================\n" << endl;
	}
};

class DiscountProduct : public Product {  //�ڽ� Ŭ����, Product ���
	//������� (������(__%))
	string discount; 

public:
	//DiscountProduct ������
	DiscountProduct(string n, double p, string d):discount(d), Product(n,p){
		//Product ������� ���� �� discount ����
		cout << "DiscountProduct ������" << endl;
		calculator(); //���ε� ���� ��� �� ����
	}

	//���� ��������� ������ �� ������
	string getDiscount() { return discount;}
	void setDiscount(string d) {
		discount = d;
	}

	void calculator() { //���ε� ���� ��� �� ���� �Լ�
		//���ڿ� �и�
		string tmp = getDiscount();
		EraseLastSpace(tmp);
		
		//%���� ���ڿ��� �Ǽ������� ��ȯ�Ͽ� ���� ����
		setPrice(getPrice()*(1.0-stod(tmp)/100.0));
	} 

	void EraseLastSpace(string& s) //�Էµ� ���ڿ� % ����� �Լ�
	{
		while (s[s.length() - 1] == '%') // �������� % ���
		{
			s.erase(s.length() - 1, 1);
		}
	}
	
};

int main() {

	cout << "�ǸŹ��� ��ȸ ���α׷�" << endl;
	Product* p1 = new Product("toothbrush", 3000);
	Product* p2 = new DiscountProduct("toothbrush2", 3000, "15%");

	cout << "\n�� ��ǰ" << endl;
	p1->print();
	cout << "���� ��ǰ" << endl;
	p2->print();

	cout << "����ȭ��" << endl;
	cout << "p1: "<< p1->getPrice() << endl;
	cout << "p2: "<< p2->getPrice() << endl;

	system("pause");
	return 0;
}