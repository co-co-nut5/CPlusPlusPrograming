#define _USE_MATH_DEFINES //cmath를 사용하기 위해 필요

#include <iostream>
#include <cmath>
using namespace std;

int ipower(int n, int k) { //거듭제곱을 계산하는 함수
	return pow(n, k);
}

int main() {

	cout << "-------------------\n";

	for (int i = 0; i <= 10; i++) {
		cout << " 3의 ";
		printf("%2d", i); 
		/* 0부터 10까지 출력하는 부분
		한자릿수면 왼쪽은 빈칸으로 채워짐*/

		cout << "승 ||";
		printf("%6d\n", ipower(3, i));
		/* 3의 n승이 출력하는 부분
		6자릿수보다 작으면 왼쪽은 빈칸으로 채워짐*/
		cout << "-------------------\n";
	}
	
	system("pause");
	return 0;
}