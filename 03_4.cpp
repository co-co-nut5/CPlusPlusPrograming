#define _USE_MATH_DEFINES //cmath�� ����ϱ� ���� �ʿ�

#include<iostream>
#include<cmath>
using namespace std;

double dist_2d(int x1, int x2, int y1, int y2) { //�� ������ �Ÿ��� ��� �ϴ� �Լ�
	return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)); // pow(n,2) ���� ���, sqrt(n) ������ ���
}

int main() {

	int x1, x2, y1, y2; //�� ���� ��ǥ

	cout << "�� �� (x1, y1), (x2, y2)�� ���� ��\n"<< "x1, y1, x2, y2 ������ �Է��Ͻÿ�." << endl;
	cin >> x1 >> y1 >> x2 >> y2; // �� ���� ��ǥ ���

	cout << "�� �� ������ �Ÿ� : " << dist_2d(x1, x2, y1, y2) << endl;

	system("pause");
	return 0;
}
