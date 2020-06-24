#include <iostream>
using namespace std;

class Complex
{
	double realNum; //�Ǽ���
	double imaginaryNum; //�����

public:
	void printResult(); //�Է��� ���� �Ǽ��ο� ����η� �����
	double getRealNum() { //�Ǽ����� ���� ��ȯ�ϴ� �Լ�
		return this->realNum;
	}
	double getImaginaryNum() { //������� ���� ��ȯ�ϴ� �Լ�
		return this->imaginaryNum;
	}

	void setRealNum(double num) { //�Ǽ����� ���� �Ű����� ������ �����ϴ� �Լ�
		this->realNum = num;
	}
	void setImaginaryNum(double num) { //������� ���� �Ű����� ������ �����ϴ� �Լ�
		this->imaginaryNum = num;
	}
};

void Complex::printResult() { //Ŭ������ �ܺ������� �Լ� ����, �Է��� ���� �Ǽ��ο� ����η� �����
	if (this->getImaginaryNum() < 0) { //����ΰ� ���� ���̶��
		cout << "�Է��� �� : " << this->getRealNum() << " " << this->getImaginaryNum() << "i" << endl;
	}
	else { //����ΰ� ����� 0�� ���̶��
		cout << "�Է��� �� : " << this->getRealNum() << " + " << this->getImaginaryNum() << "i" << endl;
	}	
}

void plusnew(double a1, double b1, double a2, double b2) { //�־��� �Ű��������� �Ǽ��ο� ������� ������ �ϴ� �Լ�
	double rn, in; //�Ǽ���, �����
	rn = a1 + a2; //�Ǽ��� ����
	in = b1 + b2; //����� ����
	if (in < 0) { //����ΰ� ���� ���̶��
		cout << "��� : " << rn << " " << in << "i" << endl;
	}
	else { //����ΰ� 0�Ǵ� ���� ���̶��
		cout << "��� : " << rn << " + " << in << "i" << endl;
	}

}
void substract(double a1, double b1, double a2, double b2) {  //�־��� �Ű��������� �Ǽ��ο� ������� ������ �ϴ� �Լ�
	double rn, in; //�Ǽ���, �����
	rn = a1 - a2;//�Ǽ��� ����
	in = b1 - b2; //����� ����
	if (in < 0) { //����ΰ� ���� ���̶��
		cout << "��� : " << rn << " " << in << "i" << endl;
	}
	else {//����ΰ� 0�Ǵ� ���� ���̶��
		cout << "��� : " << rn << " + " << in << "i" << endl;
	}
}

void work(int choice) { //����ڰ� ����� �Է��ϸ� ��ɿ� ���� ������ �ϱ� ���� ����ڷ� ���� ���� �Է¹޴� �Լ�
	double rn, in; //�Ǽ���, �����
	Complex c1, c2; //ù��° ���Ҽ�, �ι�° ���Ҽ�
	cout << "ù ��° ���� �Ǽ��ο� ����θ� ���ʴ�� �Է��Ͻÿ�." << endl <<
		"��, ����� �Է½� i�� �����ϰ� �Է��Ͻÿ�." <<
		endl;
	cin >> rn >> in; //ù��° �Ǽ���, ����θ� ����ڷ� ���� �Է¹���
	c1.setRealNum(rn);//ù��° �Ǽ��� ����
	c1.setImaginaryNum(in);//ù��° ����� ����
	c1.printResult(); //���� �Էµ� �� ���
	
	//���� �ʱ�ȭ
	rn = 0.0; 
	in = 0.0;
	cout << "�� ��° ���� �Ǽ��ο� ����θ� ���ʴ�� �Է��Ͻÿ�." << endl <<
		"��, ����� �Է½� i�� �����ϰ� �Է��Ͻÿ�." <<
		endl;
	cin >> rn >> in;//�ι�° �Ǽ���, ����θ� ����ڷ� ���� �Է¹���
	c2.setRealNum(rn); //�ι�° �Ǽ��� ����
	c2.setImaginaryNum(in); //�ι�° ����� ����
	c2.printResult(); //���� �Էµ� �� ���

	if (choice == 1) { //�����̶��
		plusnew(c1.getRealNum(), c1.getImaginaryNum(), c2.getRealNum(), c2.getImaginaryNum()); //���� ���� ����
	}
	else if (choice == 2) { //�����̶��
		substract(c1.getRealNum(), c1.getImaginaryNum(), c2.getRealNum(), c2.getImaginaryNum()); //���� ���� ����
	}
}
int main() {
	int choice;	//������� ��ɾ�

	cout << "���Ҽ��� ���� ���� ���α׷�" << endl;

	while (true) {
		cout << "�޴� �� ���ڸ� �Է��Ͻÿ�." << endl;
		cout << "1. ���ϱ�" << endl;
		cout << "2. ����" << endl;
		cout << "3. ����" << endl;
		cin >> choice; //����ڷ� ���� ����� �Է¹���
		if (choice == 1 || choice == 2) { //���ϱ� Ȥ�� ����
			work(choice); //��ɿ� ���� ���� ����
			break;		
		}
		else if (choice == 3) { //����
			cout << "����" << endl;
			break;
		}
		else {
			cout << "�߸��� ��ȣ�� �Է��ϼ̽��ϴ�." << endl;
		}	
	}
	system("pause");
	return 0;
}
