#define _USE_MATH_DEFINES //cmath�� ����ϱ� ���� �ʿ�

#include <iostream>
#include <cmath> //n���� ���� ������ ������ ���� �ʿ�
using namespace std;

int main() {

	int a, b, c; //���������Ŀ��� ���� ��� a, b, c�� �����ϴ� ����

	cout << "a, b, c�� �� ����� ������� �Է��Ͻÿ�."<<endl; //����ڰ� a,b,c�� �Է��϶�� �ȳ���
	cin >> a; //������� �Է°��� a�� ����
	cin >> b; //������� �Է°��� b�� ����
	cin >> c; //������� �Է°��� c�� ����


	//���� ���� ���
	if ((pow(b,2) - 4 * a * c) > 0) { //���� �ΰ��� ��
		cout << "���� �������� ���� "<< ((-b) + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a) << ", " << ((-b) - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a) <<"�Դϴ�.";
		//�ΰ��� �� ���
	}

	else if ((pow(b, 2) - 4 * a * c) == 0) { //���� �Ѱ��� ��
		cout << "���� �������� ���� " << (-b) / (2 * a) << "�Դϴ�.";
		//�Ѱ��� �����

	}
	
	else { //���� ���� ��
		cout << "���� �������� ���� �����ϴ�.";
		//���� ���ٰ� ���
	}

	system("pause");
	return 0;
}