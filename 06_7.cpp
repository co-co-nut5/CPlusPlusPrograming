#include <iostream>
using namespace std;

class Triangle {
	double base, height, area; //밑변, 높이, 삼각형의 넓이
public:
	double getRealArea(); //삼각형의 넓이를 계산하는 함수
	double getBase() { //밑변을 반환하는 함수
		return this->base;
	}
	double getHeight() { //높이를 반환하는 함수
		return this->height;
	}
	double getArea() { //넓이를 반환하는 함수
		return this->area;
	}
	void setBase(double b) { //밑변을 매개변수 값으로 설정하는 함수
		this->base = b;
	}
	void setHeight(double h) { //높이를 매개변수 값으로 설정하는 함수
		this->height = h;
	}
	void setArea(double a) { //넓이를 매개변수 값으로 설정하는 함수
		this->area = a;
	}
};

double Triangle::getRealArea() { //삼각형의 넓이를 계산하는 함수, 클래스의 외부에서 함수 내용 정의
	this->setArea(this->getBase() * this->getHeight() / 2.0); 
	// 밑변 * 높이 / 2를 삼각형의 넓이로 설정
	return this->getArea(); //삼각형의 넓이를 반환
}

int main() {

	double b, h; //밑변, 높이
	cout << "삼각형의 면적을 관리하는 프로그램" << endl;
	cout << "삼각형의 밑변의 길이와 높이를 입력하시오." << endl;
	cin >> b >> h; //사용자로 부터 밑변과 높이를 입력받아 저장

	Triangle t; //삼각형 클래스 선언
	t.setBase(b); // 밑변을 사용자로 부터 받은 값으로 저장
	t.setHeight(h); //높이를 사용자로 부터 받은 값으로 저장
	cout<<"삼각형의 면적 : " << t.getRealArea() << endl; //삼각형의 넓이 출력

	system("pause");
	return 0;
}