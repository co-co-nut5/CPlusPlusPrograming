#include <iostream>

using namespace std;


int main() {
	int flag = 0;//���� ��� ����
	double mid, fin, quiz, result; //�߰����, �⸻���, ����, ���� ��հ�
	
	cout << "�߰����, �⸻���, ���� ���� ������ �Է��Ͻÿ�.\n";
	cin >> mid; //����ڷ� ���� �߰���� ������ ����
	cin >> fin;//����ڷ� ���� �⸻��� ������ ����
	cin >> quiz;//����ڷ� ���� ���� ������ ����

	result = (0.4 * mid) + (0.5 * fin) + (0.1 * quiz); //���� ���� ��հ� ���

	while (true) {

		if (result >= 90) { //���� ��հ��� 90 �̻�
			cout << "������ A�Դϴ�." << endl;
			break;
		}
		else if (result >= 80) { //���� ��հ��� 80 �̻�
			cout << "������ B�Դϴ�." << endl;
			break;

		}
		else if (result >= 70) { //���� ��հ��� 70 �̻�
			cout << "������ C�Դϴ�." << endl;			
			break;

		}
		else if (result >= 60) { //���� ��հ��� 60 �̻�
			cout << "������ D�Դϴ�." << endl;
			break;

		} 
		else {//���� ��հ��� 60 �̸�
			cout << "������ F�Դϴ�." << endl;
			break;
		}		
	}	
	
	system("pause");

	return 0;

}