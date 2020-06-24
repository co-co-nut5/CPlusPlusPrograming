#include <iostream>
using namespace std;

class Triangle {
	double base, height, area; //�غ�, ����, �ﰢ���� ����
public:
	double getRealArea(); //�ﰢ���� ���̸� ����ϴ� �Լ�
	double getBase() { //�غ��� ��ȯ�ϴ� �Լ�
		return this->base;
	}
	double getHeight() { //���̸� ��ȯ�ϴ� �Լ�
		return this->height;
	}
	double getArea() { //���̸� ��ȯ�ϴ� �Լ�
		return this->area;
	}
	void setBase(double b) { //�غ��� �Ű����� ������ �����ϴ� �Լ�
		this->base = b;
	}
	void setHeight(double h) { //���̸� �Ű����� ������ �����ϴ� �Լ�
		this->height = h;
	}
	void setArea(double a) { //���̸� �Ű����� ������ �����ϴ� �Լ�
		this->area = a;
	}
};

double Triangle::getRealArea() { //�ﰢ���� ���̸� ����ϴ� �Լ�, Ŭ������ �ܺο��� �Լ� ���� ����
	this->setArea(this->getBase() * this->getHeight() / 2.0); 
	// �غ� * ���� / 2�� �ﰢ���� ���̷� ����
	return this->getArea(); //�ﰢ���� ���̸� ��ȯ
}

int main() {

	double b, h; //�غ�, ����
	cout << "�ﰢ���� ������ �����ϴ� ���α׷�" << endl;
	cout << "�ﰢ���� �غ��� ���̿� ���̸� �Է��Ͻÿ�." << endl;
	cin >> b >> h; //����ڷ� ���� �غ��� ���̸� �Է¹޾� ����

	Triangle t; //�ﰢ�� Ŭ���� ����
	t.setBase(b); // �غ��� ����ڷ� ���� ���� ������ ����
	t.setHeight(h); //���̸� ����ڷ� ���� ���� ������ ����
	cout<<"�ﰢ���� ���� : " << t.getRealArea() << endl; //�ﰢ���� ���� ���

	system("pause");
	return 0;
}