#include <iostream>
using namespace std;
double add_tax(int &, int rate = 20); //���޿� �ҵ漼�� �߰��� ���� ��ȯ�ϴ� �Լ�

int main() {
	int choice, s, r; //����� ���� ��ȣ, ����, �ҵ��ۼ�Ʈ

	cout << "���޿� �ҵ漼(%)�� �߰��� ��ȯ�ϴ� ���α׷�" << endl;

	while (true) { //����ڰ� ��Ȯ�� ���� �Է��� �� ���� �ݺ�
		cout << "1. ���ް� �ҵ漼(%) ��� �Է��ϱ�" << endl
			<< "2. ���޸� �Է��ϱ�" << endl;
		cin >> choice; //����� ���� ��ȣ �Է�
		if (choice == 1) { //�Ѵ� �Է�
			cout << "���ް� �ҵ漼��(%)�� �Է��Ͻÿ�. : ";
			cin >> s >> r; //������� ���ް� �ҵ漼�� �Է�
			cout << "��� : " << add_tax(s, r) << endl; //��� ���
			break;
		}
		else if (choice == 2) { //���޸� �Է�
			cout << "������ �Է��Ͻÿ�. : ";
			cin >> s;//������� ���� �Է�
			cout << "��� : " << add_tax(s) << endl; // ��� ���
			break;
		}
		else cout << "�߸��� ���� �Է��Ͽ����ϴ�." << endl <<endl; //����� ���ù�ȣ�� �߸��Ǹ� �ٽ� �Է¹���
	}
	system("pause");
	return 0;
}
double add_tax(int &salary, int rate) { //���޿� �ҵ漼�� �߰��� ���� ��ȯ�ϴ� �Լ�
	return salary*(1 + rate/100.0); 
}