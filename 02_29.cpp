#define _USE_MATH_DEFINES //cmath�� ����ϱ� ���� �ʿ�

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int countOfAns = 0; //������ ���̰� 100���� ���� �����ﰢ���� ����
	cout << "[�� ���� ����]\n"<<"a b c\n";

	//a,b,c�� ���� 1���� 100���� �˻�
	for (int a = 1; a <= 100; a++) {
		for (int b = 1; b <= 100; b++) {
			for (int c = 1; c <= 100; c++) {
				
				if (pow(a, 2) + pow(b, 2) == pow(c, 2)) { //�����ﰢ�� ���ǿ� �����Ѵٸ�
					if (a <= b) { //�ߺ� ���� �� �������� ����
						countOfAns++; //������ ���̰� 100���� ���� �����ﰢ���� ���� ����
						cout << a << " " << b << " " << c << endl;
					}									
				}		
			}
		}
	}
	cout << "�� ���� : " << countOfAns << endl;

	system("pause");
	return 0;
}