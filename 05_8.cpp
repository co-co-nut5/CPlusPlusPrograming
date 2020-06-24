#include <iostream>
using namespace std;

double get_input(double&, double&); //대출금와 이자율을 입력받아 대출이자를 계산하는 함수

int main() {
	double loan = 0.0 , rateOfInterest = 0.0; //대출금, 이자율

	cout << "대출금에 대한 이자 계산 프로그램" << endl;
	cout << "한 달 이자 : " << get_input(loan, rateOfInterest) << endl; //결과 출력

	system("pause");
	return 0;
}
double get_input(double& loan, double& rateOfInterest) {//대출금와 이자율을 입력받아 대출이자를 계산하는 함수
	cout << "대출금과 이율(%)을 입력하시오. : ";
	cin >> loan >> rateOfInterest; //사용자로 부터 대출금과 이자율을 저장
	return loan * (rateOfInterest / 100.0); // 계산한 결과 반환
}