#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

class Shape { //부모 클래스
	string name; // 도형 이름
	public:
		virtual double getSurfaceArea() { return 1; }; //가상 함수, 면적 계산 함수
		string getName() { return name; } //도형 이름 접근자
		void setName(string n) { name = n; } //도형 이름 설정자
};
class Sphere : public Shape {  //자식 클래스, 구
	double radious; //반지름

public:
	Sphere(double r) : radious(r) { //구 생성자
		cout << "구 생성자" << endl;
		setName("구"); //도형이름을 구로 설정
	}
	
	double getRadious() { return radious; } // 반지름 접근자
	
	double getSurfaceArea() {//도형 면적 계산 함수
		return 4 * M_PI * pow(getRadious(), 2);
	}
};
class Cube : public Shape {
	double width,depth,height; //밑변의 가로, 세로, 높이
public:

	Cube(double w, double d, double h):width(w),depth(d),height(h){ //직육면체 생성자
		cout << "직육면체 생성자" << endl;
		setName("직육면체"); //도형이름을 직육면체로 설정
	}

	double getWidth() { return width; } // 가로 접근자
	double getDepth() { return depth; } // 세로 접근자
	double getHeight() { return height; } // 높이 접근자
	double getSurfaceArea() { //도형 면적 계산 함수
		return getWidth() * getDepth() * getHeight();
	}
};
class Cylinder : public Shape {
	double radious, height;
public:

	Cylinder(double r, double h): radious(r), height(h){ //원기둥 생성자
		cout << "원기둥 생성자" << endl;
		setName("원기둥"); //도형이름을 원기둥로 설정
	}

	double getRadious() { return radious; } // 반지름 접근자
	double getHeight() { return height; } // 높이 접근자

	double getSurfaceArea() {
		return 2 * M_PI * pow(getRadious(), 2) + 2 * M_PI * getRadious() * getHeight();
	}
};

int main() {
	
	cout << "도형의 표면적을 계산하는 프로그램" << endl;

	Shape* arrayOfShapes[3];

	//구, 직육면체, 원기둥(자식 클래스)의 멤버변수를 생성자를 이용해 설정한뒤
	//부모 클래스 배열에 자식 클래스 생성
	arrayOfShapes[0] = new Sphere(3);
	arrayOfShapes[1] = new Cube(2,3,5);
	arrayOfShapes[2] = new Cylinder(3,4);


	//저장된 도형이름과 표면적을 차례로 출력
	for (int i = 0; i < 3; i++) {
		cout << arrayOfShapes[i]->getName() << "의 표면적 : "
			<< arrayOfShapes[i]->getSurfaceArea() << endl;
	}	

	system("pause");
	return 0;
}