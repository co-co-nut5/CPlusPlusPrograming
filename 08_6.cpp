#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

class Shape { //�θ� Ŭ����
	string name; // ���� �̸�
	public:
		virtual double getSurfaceArea() { return 1; }; //���� �Լ�, ���� ��� �Լ�
		string getName() { return name; } //���� �̸� ������
		void setName(string n) { name = n; } //���� �̸� ������
};
class Sphere : public Shape {  //�ڽ� Ŭ����, ��
	double radious; //������

public:
	Sphere(double r) : radious(r) { //�� ������
		cout << "�� ������" << endl;
		setName("��"); //�����̸��� ���� ����
	}
	
	double getRadious() { return radious; } // ������ ������
	
	double getSurfaceArea() {//���� ���� ��� �Լ�
		return 4 * M_PI * pow(getRadious(), 2);
	}
};
class Cube : public Shape {
	double width,depth,height; //�غ��� ����, ����, ����
public:

	Cube(double w, double d, double h):width(w),depth(d),height(h){ //������ü ������
		cout << "������ü ������" << endl;
		setName("������ü"); //�����̸��� ������ü�� ����
	}

	double getWidth() { return width; } // ���� ������
	double getDepth() { return depth; } // ���� ������
	double getHeight() { return height; } // ���� ������
	double getSurfaceArea() { //���� ���� ��� �Լ�
		return getWidth() * getDepth() * getHeight();
	}
};
class Cylinder : public Shape {
	double radious, height;
public:

	Cylinder(double r, double h): radious(r), height(h){ //����� ������
		cout << "����� ������" << endl;
		setName("�����"); //�����̸��� ����շ� ����
	}

	double getRadious() { return radious; } // ������ ������
	double getHeight() { return height; } // ���� ������

	double getSurfaceArea() {
		return 2 * M_PI * pow(getRadious(), 2) + 2 * M_PI * getRadious() * getHeight();
	}
};

int main() {
	
	cout << "������ ǥ������ ����ϴ� ���α׷�" << endl;

	Shape* arrayOfShapes[3];

	//��, ������ü, �����(�ڽ� Ŭ����)�� ��������� �����ڸ� �̿��� �����ѵ�
	//�θ� Ŭ���� �迭�� �ڽ� Ŭ���� ����
	arrayOfShapes[0] = new Sphere(3);
	arrayOfShapes[1] = new Cube(2,3,5);
	arrayOfShapes[2] = new Cylinder(3,4);


	//����� �����̸��� ǥ������ ���ʷ� ���
	for (int i = 0; i < 3; i++) {
		cout << arrayOfShapes[i]->getName() << "�� ǥ���� : "
			<< arrayOfShapes[i]->getSurfaceArea() << endl;
	}	

	system("pause");
	return 0;
}