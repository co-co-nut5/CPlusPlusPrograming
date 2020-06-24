#include <iostream>
#include <cmath>
using namespace std;
double cylinder(double, double h = 1.0);
const double PI = 3.141592653589793238463;

int main() {
	int choice, r, h; //사용자 선택 번호, 반지름, 높이

	cout << "원기둥의 부피를 구하는 프로그램"<<endl;

	while (true) { //사용자가 정확한 값을 입력할 때 까지 반복
		cout << "1. 반지름과 높이 모두 입력하기" << endl
			<< "2. 반지름만 입력하기" << endl;
		cin >> choice; //사용자 선택 번호 입력
		if (choice == 1) { //둘다 입력
			cout << "반지름과 높이를 입력하시오. : ";
			cin >> r >> h; //반지름과 높이 입력
			cout << "결과 : " << cylinder(r,h) << endl; //결과 출력
			break;
		}
		else if (choice == 2) { //반지름만 입력
			cout << "반지름을 입력하시오. : ";
			cin >> r;//반지름 입력
			cout << "결과 : " << cylinder(r) << endl; // 결과 출력
			break;
		}
		else cout << "잘못된 값을 입력하였습니다." << endl << endl; 
		//사용자 선택번호가 잘못되면 다시 입력받음
	}
	system("pause");
	return 0;
}
double cylinder(double r, double h) {
	return  pow(r, 2) * h * PI;
}
