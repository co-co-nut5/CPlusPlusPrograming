#include <iostream>
using namespace std;

double get_input(double&, double&); //����ݿ� �������� �Է¹޾� �������ڸ� ����ϴ� �Լ�

int main() {
	double loan = 0.0 , rateOfInterest = 0.0; //�����, ������

	cout << "����ݿ� ���� ���� ��� ���α׷�" << endl;
	cout << "�� �� ���� : " << get_input(loan, rateOfInterest) << endl; //��� ���

	system("pause");
	return 0;
}
double get_input(double& loan, double& rateOfInterest) {//����ݿ� �������� �Է¹޾� �������ڸ� ����ϴ� �Լ�
	cout << "����ݰ� ����(%)�� �Է��Ͻÿ�. : ";
	cin >> loan >> rateOfInterest; //����ڷ� ���� ����ݰ� �������� ����
	return loan * (rateOfInterest / 100.0); // ����� ��� ��ȯ
}