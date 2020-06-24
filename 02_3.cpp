#define _USE_MATH_DEFINES //cmath를 사용하기 위해 필요

#include <iostream>
#include <cmath> //n승의 곱과 제곱근 연산을 위해 필요
using namespace std;

int main() {

	int binaryNum=0, decimalNum=0, n=0; //이진수, 십진수, n승

	cout << "2진수를 입력하시오 : ";
	cin >> binaryNum; //사용자로 부터 2진수 저장

	
	while (binaryNum > 0) {//음수는 고려하지 않음

		decimalNum += (binaryNum % 10) * pow(2,n);
		/*1. (binaryNum % 10) : 가장 오른쪽 자릿수부터 왼쪽 자릿수 순서대로 계산
		2. pow(2,n) : 2의 0승으로 시작하여 변수 n을 반복문이
		회전할 때 마다 증가해 2의 n승까지 계산
		3. decimalNum += (binaryNum % 10) * pow(2,n) : 둘을 곱한 결과값을 십진수에
		더해줌으로써 반복문 종료 시 십진수 계산 완료
		*/

		binaryNum /= 10; // 가장 오른쪽 자릿수부터 제거
		n += 1;	// 승 증가
	}

	if (binaryNum >= 0) { //음수 고려 안함
		cout << "십진수 : "<< decimalNum << endl;
	}
	else {
		cout << "계산할 수 없습니다."<<endl;
	}

	system("pause");

	return 0;

}