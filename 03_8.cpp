#include <iostream>
#include <cmath>
#include <cstdlib>
#include <time.h>

using namespace std;

int rand_range(int s, int e) {
	//srand((unsigned)time(NULL)); 
	//������ �ý��� Ÿ������ �����߻��� �ʱ�ȭ
	//�������� 600���� ��µǴ� ������ �־� ������ 

	return (s - 1 + rand() % e); // ó����-1 + rand() % �ܰ�
}

int main() {
	int rand_num = 0; //���� �� ����
	double countOfNum[6] = {0.0}; //0,1,2,3,4,5�� ���� �� �� ���Դ��� �����ϴ� �迭

	for (int i = 0; i < 600; i++) {
		rand_num = rand_range(1, 6); //0,1,2,3,4,5 �� �ϳ� ����

		for (int j = 0; j < 6; j++) {//0,1,2,3,4,5�� ���� �� �� ���Դ���
			if(rand_num == j) countOfNum[j] += 1.0; //�迭�� ���� ����
		}		
		rand_num = 0; //���� �ʱ�ȭ
	}

	for (int k = 0; k < 6; k++) {
		cout << k << "�� Ȯ�� : " << countOfNum[k]/600.0 << endl; // Ȯ�� ���
	}

	cout << "��迡 ���� �ٻ��� Ȯ���� ����" << endl;
	system("pause");
	return 0;
}