#define _USE_MATH_DEFINES //cmath�� ����ϱ� ���� �ʿ�

#include <iostream>
#include <cmath>
using namespace std;

int ipower(int n, int k) { //�ŵ������� ����ϴ� �Լ�
	return pow(n, k);
}

int main() {

	cout << "-------------------\n";

	for (int i = 0; i <= 10; i++) {
		cout << " 3�� ";
		printf("%2d", i); 
		/* 0���� 10���� ����ϴ� �κ�
		���ڸ����� ������ ��ĭ���� ä����*/

		cout << "�� ||";
		printf("%6d\n", ipower(3, i));
		/* 3�� n���� ����ϴ� �κ�
		6�ڸ������� ������ ������ ��ĭ���� ä����*/
		cout << "-------------------\n";
	}
	
	system("pause");
	return 0;
}