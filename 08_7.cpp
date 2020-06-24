#include <iostream>
#include <string>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

class Product { //부모 클래스
	//멤버 변수(이름, 가격)
	string name;
	double price;
public:
	//Product 생성자
	Product(string n, double p) : name(n), price(p) {
		cout << "Product 생성자" << endl;
	}

	//현재 멤버변수의 설정자 및 접근자
	string getName() { return name; } //이름 접근자
	void setName(string n) { name = n; } //이름 설정자
	double getPrice() { return price; } //가격 접근자
	void setPrice(double p) { price = p; } //가격 설정자

	//현재 클래스의 멤버함수를 출력
	void print() {
		cout << "============================================" << endl;
		cout << "상품 이름 : " << getName() << endl;
		cout << "가격 : " << getPrice() << endl;
		cout << "============================================\n" << endl;
	}
};

class DiscountProduct : public Product {  //자식 클래스, Product 상속
	//멤버변수 (할인율(__%))
	string discount; 

public:
	//DiscountProduct 생성자
	DiscountProduct(string n, double p, string d):discount(d), Product(n,p){
		//Product 멤버변수 설정 및 discount 설정
		cout << "DiscountProduct 생성자" << endl;
		calculator(); //할인된 가격 계산 및 저장
	}

	//현재 멤버변수의 설정자 및 접근자
	string getDiscount() { return discount;}
	void setDiscount(string d) {
		discount = d;
	}

	void calculator() { //할인된 가격 계산 및 저장 함수
		//문자열 분리
		string tmp = getDiscount();
		EraseLastSpace(tmp);
		
		//%업는 문자열을 실수형으로 전환하여 가격 변경
		setPrice(getPrice()*(1.0-stod(tmp)/100.0));
	} 

	void EraseLastSpace(string& s) //입력된 문자열 % 지우는 함수
	{
		while (s[s.length() - 1] == '%') // 마지막이 % 라면
		{
			s.erase(s.length() - 1, 1);
		}
	}
	
};

int main() {

	cout << "판매물건 조회 프로그램" << endl;
	Product* p1 = new Product("toothbrush", 3000);
	Product* p2 = new DiscountProduct("toothbrush2", 3000, "15%");

	cout << "\n본 상품" << endl;
	p1->print();
	cout << "할인 상품" << endl;
	p2->print();

	cout << "예제화면" << endl;
	cout << "p1: "<< p1->getPrice() << endl;
	cout << "p2: "<< p2->getPrice() << endl;

	system("pause");
	return 0;
}