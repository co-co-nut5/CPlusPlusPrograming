#include <iostream>
using namespace std;
class Food {
	//멤버 변수(제목, 페이지수, 저자)
	double calory = 0;
	double price = 0;
	double weight = 0;

public:
	//생성자
	Food(double c, double p, double w) : calory(c), price(p), weight(w) {
		cout << "Food  생성자" << endl;
	}
	//소멸자
	~Food() {
		cout << "Food  소멸자" << endl;
	}

	//멤버변수의 접근자와 설정자
	double getCalory() {
		return calory;
	}
	double getPrice() {
		return price;
	}
	double getWeight() {
		return weight;
	}
	void setCalory(double c) {
		calory = c;
	}
	void setPrice(double p) {
		price = p;
	}
	void setWeight(double w) {
		weight = w;
	}
};

class Melon :public Food { //Food  클래스 상속
	//멤버 변수(발매일)
	string info;


public:
	//생성자
	Melon(double c, double p, double w, string i)
		:Food(c,p,w), info(i)
	{
		//상속받은 Food  내 변수와 Melon 클래스 내 변수 초기화
		cout << "Melon 생성자" << endl;
	}
	//소멸자
	~Melon() {
		cout << "Melon 소멸자" << endl;
	}
	//접근자와 설정자
	string getInfo() {
		return info;
	}

	void setInfo(string i) {
		info = i;
	}

	void display();
	//상속받은 멤버변수와 Food  멤버변수의 상태를 출력하는 함수
};

void Melon::display() {
	cout << "\n======================================" << endl;
	cout << "칼로리 : " << this->getCalory() << endl;
	cout << "가격 : " << this->getPrice() << endl;
	cout << "중량 : " << this->getWeight() << endl;
	cout << "경작 농원 정보 : " << this->getInfo() << endl;

	cout << "======================================\n" << endl;

}

int main() {

	//클래스 선언
	Melon m(300,15000,1,"천안 병천");
	m.display(); //현재 변수 출력

	cout << "가격, 경작 농원 정보 변경" << endl;
	m.setPrice(20000);
	m.setInfo("천안 북면");

	m.display();//현재 변수 출력

	system("pause");
	return 0;
}