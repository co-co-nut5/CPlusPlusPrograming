#include <iostream>
using namespace std;

int main() {

	int height; //키를 저장하는 변수
	double inch; //인치를 저장하는 변수
	int feet;//피트를 저장한는 변수
	double result;//피트로 처리한 인치를 저장하는 변수

	cout << "키를 입력하시오:"; //사용자에게 안내문을 지시
	cin >> height; //height에 사용자가 입력한 값 저장

	inch = height / 2.54; //cm -> 인치 변환
	feet = inch / 12; //인치 -> 피트 변환(정수형)
	result = inch - 12 * feet; //피트를 처리하고 난 나머지 인치 값 

	cout << height << "는 " << feet << "피트 " << result << "인치입니다.";	
	system("pause");
	return 0;

}