#include <iostream>
using namespace std;

int main() {

	int num; // ����ڰ� �Է��� ������ �����
	int tmp; // ���� ������ ���� �ӽ� ����
	cout << "������ �Է��Ͻÿ�.:"; //����ڰ� ������ �Է��϶�� �ȳ���
	cin >> num; //������� �Է°��� num�� ����

	if (num >= 1000) { //1000���� ũ�ų� ���ٸ�
		tmp = num / 1000; //õ���� �������� �� ���� ����
		cout <<"õ���ڸ� : "<< tmp <<endl; //õ�� �ڸ� ���
		num = num - tmp*1000; //õ�� �ڸ��� �����ϴ� ����
	}

	if (num >= 100) { //100���� ũ�ų� ���ٸ�
		tmp = num / 100; //������ �������� �� ���� ����
		cout << "�����ڸ� : " << tmp << endl; //���� �ڸ� ���
		num = num - tmp*100; //���� �ڸ��� �����ϴ� ����
	}

	if (num >= 10) { //10���� ũ�ų� ���ٸ�
		tmp = num / 10; //������ �������� �� ���� ����
		cout << "�����ڸ� : " << tmp << endl; //���� �ڸ� ���
		num = num - tmp*10; //���� �ڸ��� �����ϴ� ����
	}
	
	cout << "�����ڸ� : " << num << endl; 
	//�Է°��� 0���� ũ�ų� ���� 10000 ���� ���� ���̶�� ������.
	//������ ���� �ڸ��� �����Ѵ�.

	system("pause");

	return 0;

}