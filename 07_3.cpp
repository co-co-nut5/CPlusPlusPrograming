#include <iostream>
using namespace std;
class Book {
	//��� ����(����, ��������, ����)
	string title = "";
	string numOfPage = "";
	string author = "";

public:
	//������
	Book(string t, string n, string a) : title(t), numOfPage(n), author (a) {
		cout << "Book ������" << endl;
	}
	//�Ҹ���
	~Book() {
		cout << "Book �Ҹ���" << endl;
	}

	//��������� �����ڿ� ������
	string getTitle() {
		return title;
	}
	string getNumOfPage() {
		return numOfPage;
	}
	string getAuthor() {
		return author;
	}
	void setTitle(string t) {
		title = t;
	}
	void setNumOfPage(string n) {
		numOfPage = n;
	}
	void setAuthor(string a) {
		author = a;
	}
};

class Magazine :public Book { //Book Ŭ���� ���
	//��� ����(�߸���)
	string date;


public:
	//������
	Magazine(string t, string n, string a, string d)
		:Book(t,n,a), date(d)
	{
		//��ӹ��� Book �� ������ Magazine Ŭ���� �� ���� �ʱ�ȭ
		cout << "Magazine ������" << endl;
	}
	//�Ҹ���
	~Magazine() {
		cout << "Magazine �Ҹ���" << endl;
	}
	//�����ڿ� ������
	string getDate() {
		return date;
	}

	void setDate(string d) {
		date = d;
	}

	void display();
	//��ӹ��� ��������� Book ��������� ���¸� ����ϴ� �Լ�
};

void Magazine::display() {
	cout << "\n======================================" << endl;
	cout << "���� : " << this->getTitle()<< endl;
	cout << "������ �� : " << this->getNumOfPage() << endl;
	cout << "���� : " << this->getAuthor() << endl;
	cout << "�߸��� : " << this->getDate() << endl;

	cout << "======================================\n" << endl;

}

int main() {

	//Ŭ���� ����
	Magazine m("�Ķ�����", "30", "ȫ�浿", "2010/10/21");
	m.display(); //���� ���� ���

	cout << "������ ��, �߸��� ����" << endl;
	m.setNumOfPage("35");
	m.setDate("2011/10/21");

	m.display();//���� ���� ���

	system("pause");
	return 0;
}