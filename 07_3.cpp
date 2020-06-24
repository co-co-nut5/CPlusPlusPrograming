#include <iostream>
using namespace std;
class Book {
	//멤버 변수(제목, 페이지수, 저자)
	string title = "";
	string numOfPage = "";
	string author = "";

public:
	//생성자
	Book(string t, string n, string a) : title(t), numOfPage(n), author (a) {
		cout << "Book 생성자" << endl;
	}
	//소멸자
	~Book() {
		cout << "Book 소멸자" << endl;
	}

	//멤버변수의 접근자와 설정자
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

class Magazine :public Book { //Book 클래스 상속
	//멤버 변수(발매일)
	string date;


public:
	//생성자
	Magazine(string t, string n, string a, string d)
		:Book(t,n,a), date(d)
	{
		//상속받은 Book 내 변수와 Magazine 클래스 내 변수 초기화
		cout << "Magazine 생성자" << endl;
	}
	//소멸자
	~Magazine() {
		cout << "Magazine 소멸자" << endl;
	}
	//접근자와 설정자
	string getDate() {
		return date;
	}

	void setDate(string d) {
		date = d;
	}

	void display();
	//상속받은 멤버변수와 Book 멤버변수의 상태를 출력하는 함수
};

void Magazine::display() {
	cout << "\n======================================" << endl;
	cout << "제목 : " << this->getTitle()<< endl;
	cout << "페이지 수 : " << this->getNumOfPage() << endl;
	cout << "저자 : " << this->getAuthor() << endl;
	cout << "발매일 : " << this->getDate() << endl;

	cout << "======================================\n" << endl;

}

int main() {

	//클래스 선언
	Magazine m("파란염소", "30", "홍길동", "2010/10/21");
	m.display(); //현재 변수 출력

	cout << "페이지 수, 발매일 변경" << endl;
	m.setNumOfPage("35");
	m.setDate("2011/10/21");

	m.display();//현재 변수 출력

	system("pause");
	return 0;
}