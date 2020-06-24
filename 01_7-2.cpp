#include <iostream>
using namespace std;

int main() {

	double height; //키를 저장하는 변수
	int inch; //인치를 저장하는 변수
	int feet;//피트를 저장한는 변수

	cout << "키를 입력하시오(피트):"; //사용자에게 피트를 입력하라는 안내문
	cin >> feet; //사용자로부터 입력 받은 값을 피트에 저장
	cout << "키를 입력하시오(인치):"; //사용자에게 인치를 입력하라는 안내문
	cin >> inch; //사용자로부터 입력 받은 값을 인치에 저장

	cout << feet << "피트 " << inch << "인치는 " << feet * 30.48 + inch * 2.54 << "cm 입니다."; 
	//피트와 인치를 센치미터로 변환하여 출력
	system("pause");

	return 0;

}