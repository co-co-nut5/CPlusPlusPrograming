#include <iostream>
using namespace std;
class Person {
	//멤버 변수(이름, 주소, 전화번호)
	string name = "";
	string address = "";
	string phone = "";
		
public :
	//생성자
	Person(string n, string a, string p) : name(n), address(a), phone(p) {
			cout << "Person 생성자" << endl;
	}
	//소멸자
	~Person() {
		cout << "Person 소멸자" << endl;
	}

	//멤버변수의 접근자와 설정자
	string getName() {
		return name;
	}
	string getAddress() {
		return address;
	}
	string getPhone() {
		return phone;
	}
	void setName(string n) {
		name = n;
	}
	void setAddress(string a) {
		address = a;
	}
	void setPhone(string p) {
		phone = p;
	}
};

class Customer:public Person { //Person 클래스 상속
	//멤버 변수(고객 번호, 마일리지)
	string customerNum;
	double mileage;

public :
	//생성자
	Customer(string n, string a, string p, string cn, double m) 
		:Person(n,a,p), customerNum(cn), mileage(m)
	{
		//상속받은 Person 내 변수와 Customer 클래스 내 변수 초기화
		cout << "Customer 생성자" << endl;
	}
	//소멸자
	~Customer() {
		cout << "Customer 소멸자" << endl;
	}
	//접근자와 설정자
	string getCustonmerNum() {
		return customerNum;
	}
	double getMileage() {
		return mileage;
	}
	void setCustomerNum(string cn) {
		customerNum = cn;
	}
	void setMileage(double m) {
		mileage = m;
	}
	void display(); 
	//상속받은 멤버변수와 Customer 멤버변수의 상태를 출력하는 함수
};

void Customer::display() {
	cout << "\n======================================" << endl;
	cout << "이름 : " << this->getName() << endl;
	cout << "주소 : " << this->getAddress() << endl;
	cout << "핸드폰번호 : " << this->getPhone() << endl;
	cout << "고객번호 : " << this->getCustonmerNum() << endl;
	cout << "마일리지 : " << this->getMileage() << endl;
	cout << "======================================\n" << endl;

}

int main() {

	//클래스 선언
	Customer c("이예지", "충청남도 병천", "010-1111-2222", "2017136082", 10000);
	c.display(); //현재 변수 출력

	cout << "핸드폰번호, 마일리지 변경" << endl;
	c.setPhone("010-2222-3333");
	c.setMileage(20000);

	c.display();//현재 변수 출력

	system("pause");
	return 0;
}