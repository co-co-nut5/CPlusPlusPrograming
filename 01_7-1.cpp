#include <iostream>
using namespace std;

int main() {

	int height; //Ű�� �����ϴ� ����
	double inch; //��ġ�� �����ϴ� ����
	int feet;//��Ʈ�� �����Ѵ� ����
	double result;//��Ʈ�� ó���� ��ġ�� �����ϴ� ����

	cout << "Ű�� �Է��Ͻÿ�:"; //����ڿ��� �ȳ����� ����
	cin >> height; //height�� ����ڰ� �Է��� �� ����

	inch = height / 2.54; //cm -> ��ġ ��ȯ
	feet = inch / 12; //��ġ -> ��Ʈ ��ȯ(������)
	result = inch - 12 * feet; //��Ʈ�� ó���ϰ� �� ������ ��ġ �� 

	cout << height << "�� " << feet << "��Ʈ " << result << "��ġ�Դϴ�.";	
	system("pause");
	return 0;

}