
#define _USE_MATH_DEFINES //cmath를 사용하기 위해 필요
#include <iostream>
#include <cmath> //파이와 제곱근을 이용하기 위해 필요
using namespace std;

int main() {

	const double a = 4 * M_PI; //구의 겉넓이 공식의 상수 부분을 a 변수에 고정함
	const double v = (double)4/(double)3 * M_PI; //구의 체적 공식의 상수 부분을 v 변수에 고정함

	double r; //반지름

	cout << "반지름 : "; //사용자로 부터 반지름을 입력하라는 안내문
	cin >> r; //사용자의 입력값이 반지름에 저장

	cout << "구의 표면적 : " << a * pow(r, 2) << " 구의 체적 : " << v * pow(r, 3) <<endl; 
	//기존 저장한 상수 값들을 통해 구의 겉넓이와 체적을 출력
	//pow()는 n제곱을 다룰 때 사용

	system("pause");
	return 0;

}