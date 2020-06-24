#define _USE_MATH_DEFINES //cmath를 사용하기 위해 필요

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int countOfAns = 0; //각변의 길이가 100보다 작은 직각삼각형의 개수
	cout << "[각 변의 길이]\n"<<"a b c\n";

	//a,b,c를 각각 1부터 100까지 검사
	for (int a = 1; a <= 100; a++) {
		for (int b = 1; b <= 100; b++) {
			for (int c = 1; c <= 100; c++) {
				
				if (pow(a, 2) + pow(b, 2) == pow(c, 2)) { //직각삼각형 조건에 성립한다면
					if (a <= b) { //중복 방지 및 오름차순 정렬
						countOfAns++; //각변의 길이가 100보다 작은 직각삼각형의 개수 연산
						cout << a << " " << b << " " << c << endl;
					}									
				}		
			}
		}
	}
	cout << "총 개수 : " << countOfAns << endl;

	system("pause");
	return 0;
}