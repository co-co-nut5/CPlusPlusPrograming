
#define _USE_MATH_DEFINES //cmath�� ����ϱ� ���� �ʿ�
#include <iostream>
#include <cmath> //���̿� �������� �̿��ϱ� ���� �ʿ�
using namespace std;

int main() {

	const double a = 4 * M_PI; //���� �ѳ��� ������ ��� �κ��� a ������ ������
	const double v = (double)4/(double)3 * M_PI; //���� ü�� ������ ��� �κ��� v ������ ������

	double r; //������

	cout << "������ : "; //����ڷ� ���� �������� �Է��϶�� �ȳ���
	cin >> r; //������� �Է°��� �������� ����

	cout << "���� ǥ���� : " << a * pow(r, 2) << " ���� ü�� : " << v * pow(r, 3) <<endl; 
	//���� ������ ��� ������ ���� ���� �ѳ��̿� ü���� ���
	//pow()�� n������ �ٷ� �� ���

	system("pause");
	return 0;

}