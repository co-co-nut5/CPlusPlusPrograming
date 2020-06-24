#include <iostream>
using namespace std;

int main() {

	int num; // 사용자가 입력한 정수가 저장됨
	int tmp; // 연산 수행을 위한 임시 변수
	cout << "정수를 입력하시오.:"; //사용자가 정수를 입력하라는 안내문
	cin >> num; //사용자의 입력값이 num에 저장

	if (num >= 1000) { //1000보다 크거나 같다면
		tmp = num / 1000; //천으로 나누었을 때 몫이 저장
		cout <<"천의자리 : "<< tmp <<endl; //천의 자리 출력
		num = num - tmp*1000; //천의 자리를 제거하는 과정
	}

	if (num >= 100) { //100보다 크거나 같다면
		tmp = num / 100; //백으로 나누었을 때 몫이 저장
		cout << "백의자리 : " << tmp << endl; //백의 자리 출력
		num = num - tmp*100; //백의 자리를 제거하는 과정
	}

	if (num >= 10) { //10보다 크거나 같다면
		tmp = num / 10; //십으로 나누었을 때 몫이 저장
		cout << "십의자리 : " << tmp << endl; //십의 자리 출력
		num = num - tmp*10; //십의 자리를 제거하는 과정
	}
	
	cout << "일의자리 : " << num << endl; 
	//입력값을 0보다 크거나 같고 10000 보다 작은 값이라고 생각함.
	//무조건 일의 자리는 존재한다.

	system("pause");

	return 0;

}