#include <iostream>
using namespace std;

int main() {
	int num; //사용자가 num과 2사이에 있는 소수를 찾는다.

	cout << "숫자를 입력하시오. ";
	cin >> num; //사용자가 입력한 수를 num에 저장

	int i = 1, countOfDivisor = 0, countOfDecimal = 0; //소수인지 검사받는 수, 약수의 수, 소수의 수 
	
	cout <<"2와 " << num << "사이에 있는 소수 : " ;

	while (i<=num) {
		/*	2부터 num이하의 모든 수를 소수인지 검사
			1은 소수가 아니기 때문에 알고리즘에서 걸러짐
		*/
		for (int j = 1; j <= i; j++) {
			if (i % j == 0) { //j가 i의 약수
				countOfDivisor++; //약수의 수 계산
			}
					
		}
		if (countOfDivisor == 2) { //소수라면
			countOfDecimal++; //소수의 수 계산 
			cout << i << " "; //소수 출력
		}
		i++; //다음 수 계산
		countOfDivisor = 0; //약수의 수 초기화
	}
	if (countOfDecimal == 0) { //소수의 수가 없으면
		cout << "둘 사이에 소수가 존재하지 않습니다.\n";
	}
	else cout << endl;
	system ("pause");

	return 0;
}