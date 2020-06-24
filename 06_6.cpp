#include <iostream>
using namespace std;

class Complex
{
	double realNum; //실수부
	double imaginaryNum; //허수부

public:
	void printResult(); //입력한 수를 실수부와 허수부로 출력함
	double getRealNum() { //실수부의 값을 반환하는 함수
		return this->realNum;
	}
	double getImaginaryNum() { //허수부의 값을 반환하는 함수
		return this->imaginaryNum;
	}

	void setRealNum(double num) { //실수부의 값을 매개변수 값으로 설정하는 함수
		this->realNum = num;
	}
	void setImaginaryNum(double num) { //허수부의 값을 매개변수 값으로 설정하는 함수
		this->imaginaryNum = num;
	}
};

void Complex::printResult() { //클래스의 외부참조로 함수 정의, 입력한 수를 실수부와 허수부로 출력함
	if (this->getImaginaryNum() < 0) { //허수부가 음의 값이라면
		cout << "입력한 수 : " << this->getRealNum() << " " << this->getImaginaryNum() << "i" << endl;
	}
	else { //허수부가 양수나 0의 값이라면
		cout << "입력한 수 : " << this->getRealNum() << " + " << this->getImaginaryNum() << "i" << endl;
	}	
}

void plusnew(double a1, double b1, double a2, double b2) { //주어진 매개변수들의 실수부와 허수부의 덧셈을 하는 함수
	double rn, in; //실수부, 허수부
	rn = a1 + a2; //실수부 연산
	in = b1 + b2; //허수부 연산
	if (in < 0) { //허수부가 음의 값이라면
		cout << "결과 : " << rn << " " << in << "i" << endl;
	}
	else { //허수부가 0또는 양의 값이라면
		cout << "결과 : " << rn << " + " << in << "i" << endl;
	}

}
void substract(double a1, double b1, double a2, double b2) {  //주어진 매개변수들의 실수부와 허수부의 뺄셈을 하는 함수
	double rn, in; //실수부, 허수부
	rn = a1 - a2;//실수부 연산
	in = b1 - b2; //허수부 연산
	if (in < 0) { //허수부가 음의 값이라면
		cout << "결과 : " << rn << " " << in << "i" << endl;
	}
	else {//허수부가 0또는 양의 값이라면
		cout << "결과 : " << rn << " + " << in << "i" << endl;
	}
}

void work(int choice) { //사용자가 명령을 입력하면 명령에 대한 연산을 하기 위해 사용자로 부터 값을 입력받는 함수
	double rn, in; //실수부, 허수부
	Complex c1, c2; //첫번째 복소수, 두번째 복소수
	cout << "첫 번째 수의 실수부와 허수부를 차례대로 입력하시오." << endl <<
		"단, 허수부 입력시 i를 제외하고 입력하시오." <<
		endl;
	cin >> rn >> in; //첫번째 실수부, 허수부를 사용자로 부터 입력받음
	c1.setRealNum(rn);//첫번째 실수부 설정
	c1.setImaginaryNum(in);//첫번째 허수부 설정
	c1.printResult(); //실제 입력된 값 출력
	
	//변수 초기화
	rn = 0.0; 
	in = 0.0;
	cout << "두 번째 수의 실수부와 허수부를 차례대로 입력하시오." << endl <<
		"단, 허수부 입력시 i를 제외하고 입력하시오." <<
		endl;
	cin >> rn >> in;//두번째 실수부, 허수부를 사용자로 부터 입력받음
	c2.setRealNum(rn); //두번째 실수부 설정
	c2.setImaginaryNum(in); //두번째 허수부 설정
	c2.printResult(); //실제 입력된 값 출력

	if (choice == 1) { //덧셈이라면
		plusnew(c1.getRealNum(), c1.getImaginaryNum(), c2.getRealNum(), c2.getImaginaryNum()); //덧셈 연산 수행
	}
	else if (choice == 2) { //뺄셈이라면
		substract(c1.getRealNum(), c1.getImaginaryNum(), c2.getRealNum(), c2.getImaginaryNum()); //뺄셈 연산 수행
	}
}
int main() {
	int choice;	//사용자의 명령어

	cout << "복소수에 대한 연산 프로그램" << endl;

	while (true) {
		cout << "메뉴 중 숫자를 입력하시오." << endl;
		cout << "1. 더하기" << endl;
		cout << "2. 빼기" << endl;
		cout << "3. 종료" << endl;
		cin >> choice; //사용자로 부터 명령을 입력받음
		if (choice == 1 || choice == 2) { //더하기 혹은 빼기
			work(choice); //명령에 따른 동작 수행
			break;		
		}
		else if (choice == 3) { //종료
			cout << "종료" << endl;
			break;
		}
		else {
			cout << "잘못된 번호를 입력하셨습니다." << endl;
		}	
	}
	system("pause");
	return 0;
}
