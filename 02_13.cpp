#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void printState(int n) { //n(��� Ȥ�� ��ǻ��)�� ����, ����, �� ���¸� ȭ�鿡 ���
	if (n == 1) cout << "����\n";
	else if (n == 2) cout << "����\n";
	else cout << "��\n";
}
int main() {
	int me = 0, com = 0; //�����, ��ǻ��
	cout << "����, ����, ���� �ش��ϴ� ��ȣ�� �����ÿ�." << endl;
	cout << "1 : ����" << endl << "2 : ����" << endl << "3 : ��" << endl;
	cin >> me;
	srand((unsigned)time(NULL)); // ������ �ý��� Ÿ������ �����߻��� �ʱ�ȭ
	com = 1 + rand() % 3; // ó���� + rand() % �ܰ�, 1~3 �� �ϳ��� com�� ����
	cout << "����� : ";
	printState(me);
	cout << "��ǻ�� : ";
	printState(com);

	if (me == com) cout << "����ڿ� ��ǻ�Ͱ� �����ϴ�.\n";
	else { //����� �ʾ��� ��
		for (int i = 1; i < 4; i++) {// ����� ����, ���� ���� �� ������� �˻�
			if (me == i) { //����ڰ� ���������� ���������� �´��� Ȯ��
				if (i == 1) {// ����ڰ� �����϶�
					if (com == 3) cout << "����ڰ� �̰���ϴ�.\n"; //��ǻ�Ͱ� ���϶�
					else cout << "����ڰ� �����ϴ�.\n";//��ǻ�Ͱ� �����϶�
				}
				else if (i == 2) { // ����ڰ� �����϶�
					if (com == 1) cout << "����ڰ� �̰���ϴ�.\n"; //��ǻ�Ͱ� �����϶�
					else cout << "����ڰ� �����ϴ�.\n";//��ǻ�Ͱ� ���϶�
				}
				else { //����ڰ� ���϶�
					if (com == 2) cout << "����ڰ� �̰���ϴ�.\n"; //��ǻ�Ͱ� �����϶�
					else cout << "����ڰ� �����ϴ�.\n";//��ǻ�Ͱ� �����϶�
				}
			}					
		}
	}
	system("pause");
	return 0;
}

