#include <iostream>
using namespace std;
double add_tax(int &, int rate = 20); //월급에 소득세를 추가한 값을 반환하는 함수

int main() {
	int choice, s, r; //사용자 선택 번호, 월급, 소득퍼센트

	cout << "월급에 소득세(%)를 추가해 반환하는 프로그램" << endl;

	while (true) { //사용자가 정확한 값을 입력할 때 까지 반복
		cout << "1. 월급과 소득세(%) 모두 입력하기" << endl
			<< "2. 월급만 입력하기" << endl;
		cin >> choice; //사용자 선택 번호 입력
		if (choice == 1) { //둘다 입력
			cout << "월급과 소득세율(%)을 입력하시오. : ";
			cin >> s >> r; //사용자의 월급과 소득세율 입력
			cout << "결과 : " << add_tax(s, r) << endl; //결과 출력
			break;
		}
		else if (choice == 2) { //월급만 입력
			cout << "월급을 입력하시오. : ";
			cin >> s;//사용자의 월급 입력
			cout << "결과 : " << add_tax(s) << endl; // 결과 출력
			break;
		}
		else cout << "잘못된 값을 입력하였습니다." << endl <<endl; //사용자 선택번호가 잘못되면 다시 입력받음
	}
	system("pause");
	return 0;
}
double add_tax(int &salary, int rate) { //월급에 소득세를 추가한 값을 반환하는 함수
	return salary*(1 + rate/100.0); 
}