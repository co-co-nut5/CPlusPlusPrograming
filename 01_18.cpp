#define _USE_MATH_DEFINES //cmath를 사용하기 위해 필요

#include <iostream>
#include <cmath> //n승의 곱과 제곱근 연산을 위해 필요
using namespace std;

int main() {

	int a, b, c; //이차방정식에서 쓰일 상수 a, b, c를 저장하는 변수

	cout << "a, b, c에 들어갈 상수를 순서대로 입력하시오."<<endl; //사용자가 a,b,c를 입력하라는 안내문
	cin >> a; //사용자의 입력값을 a에 저장
	cin >> b; //사용자의 입력값을 b에 저장
	cin >> c; //사용자의 입력값을 c에 저장


	//근의 공식 사용
	if ((pow(b,2) - 4 * a * c) > 0) { //근이 두개일 때
		cout << "이차 방정식의 근은 "<< ((-b) + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a) << ", " << ((-b) - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a) <<"입니다.";
		//두개의 근 출력
	}

	else if ((pow(b, 2) - 4 * a * c) == 0) { //근이 한개일 때
		cout << "이차 방정식의 근은 " << (-b) / (2 * a) << "입니다.";
		//한개의 근출력

	}
	
	else { //근이 없을 때
		cout << "이차 방정식의 근이 없습니다.";
		//근이 없다고 출력
	}

	system("pause");
	return 0;
}