#include <iostream>
#include <cmath>
using namespace std;
double cylinder(double, double h = 1.0);
const double PI = 3.141592653589793238463;

int main() {
	int choice, r, h; //����� ���� ��ȣ, ������, ����

	cout << "������� ���Ǹ� ���ϴ� ���α׷�"<<endl;

	while (true) { //����ڰ� ��Ȯ�� ���� �Է��� �� ���� �ݺ�
		cout << "1. �������� ���� ��� �Է��ϱ�" << endl
			<< "2. �������� �Է��ϱ�" << endl;
		cin >> choice; //����� ���� ��ȣ �Է�
		if (choice == 1) { //�Ѵ� �Է�
			cout << "�������� ���̸� �Է��Ͻÿ�. : ";
			cin >> r >> h; //�������� ���� �Է�
			cout << "��� : " << cylinder(r,h) << endl; //��� ���
			break;
		}
		else if (choice == 2) { //�������� �Է�
			cout << "�������� �Է��Ͻÿ�. : ";
			cin >> r;//������ �Է�
			cout << "��� : " << cylinder(r) << endl; // ��� ���
			break;
		}
		else cout << "�߸��� ���� �Է��Ͽ����ϴ�." << endl << endl; 
		//����� ���ù�ȣ�� �߸��Ǹ� �ٽ� �Է¹���
	}
	system("pause");
	return 0;
}
double cylinder(double r, double h) {
	return  pow(r, 2) * h * PI;
}
