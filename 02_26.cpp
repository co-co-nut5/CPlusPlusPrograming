#include <iostream>
using namespace std;

int main() {
	int num; //����ڰ� num�� 2���̿� �ִ� �Ҽ��� ã�´�.

	cout << "���ڸ� �Է��Ͻÿ�. ";
	cin >> num; //����ڰ� �Է��� ���� num�� ����

	int i = 1, countOfDivisor = 0, countOfDecimal = 0; //�Ҽ����� �˻�޴� ��, ����� ��, �Ҽ��� �� 
	
	cout <<"2�� " << num << "���̿� �ִ� �Ҽ� : " ;

	while (i<=num) {
		/*	2���� num������ ��� ���� �Ҽ����� �˻�
			1�� �Ҽ��� �ƴϱ� ������ �˰��򿡼� �ɷ���
		*/
		for (int j = 1; j <= i; j++) {
			if (i % j == 0) { //j�� i�� ���
				countOfDivisor++; //����� �� ���
			}
					
		}
		if (countOfDivisor == 2) { //�Ҽ����
			countOfDecimal++; //�Ҽ��� �� ��� 
			cout << i << " "; //�Ҽ� ���
		}
		i++; //���� �� ���
		countOfDivisor = 0; //����� �� �ʱ�ȭ
	}
	if (countOfDecimal == 0) { //�Ҽ��� ���� ������
		cout << "�� ���̿� �Ҽ��� �������� �ʽ��ϴ�.\n";
	}
	else cout << endl;
	system ("pause");

	return 0;
}