#define _USE_MATH_DEFINES //cmath�� ����ϱ� ���� �ʿ�

#include <iostream>
#include <cmath> //n���� ���� ������ ������ ���� �ʿ�
using namespace std;

int main() {

	int binaryNum=0, decimalNum=0, n=0; //������, ������, n��

	cout << "2������ �Է��Ͻÿ� : ";
	cin >> binaryNum; //����ڷ� ���� 2���� ����

	
	while (binaryNum > 0) {//������ ������� ����

		decimalNum += (binaryNum % 10) * pow(2,n);
		/*1. (binaryNum % 10) : ���� ������ �ڸ������� ���� �ڸ��� ������� ���
		2. pow(2,n) : 2�� 0������ �����Ͽ� ���� n�� �ݺ�����
		ȸ���� �� ���� ������ 2�� n�±��� ���
		3. decimalNum += (binaryNum % 10) * pow(2,n) : ���� ���� ������� ��������
		���������ν� �ݺ��� ���� �� ������ ��� �Ϸ�
		*/

		binaryNum /= 10; // ���� ������ �ڸ������� ����
		n += 1;	// �� ����
	}

	if (binaryNum >= 0) { //���� ��� ����
		cout << "������ : "<< decimalNum << endl;
	}
	else {
		cout << "����� �� �����ϴ�."<<endl;
	}

	system("pause");

	return 0;

}