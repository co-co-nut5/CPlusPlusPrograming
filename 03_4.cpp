#define _USE_MATH_DEFINES //cmath를 사용하기 위해 필요

#include<iostream>
#include<cmath>
using namespace std;

double dist_2d(int x1, int x2, int y1, int y2) { //두 사이의 거리를 계산 하는 함수
	return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)); // pow(n,2) 제곱 계산, sqrt(n) 제곱근 계산
}

int main() {

	int x1, x2, y1, y2; //각 점의 좌표

	cout << "두 점 (x1, y1), (x2, y2)이 있을 때\n"<< "x1, y1, x2, y2 순으로 입력하시오." << endl;
	cin >> x1 >> y1 >> x2 >> y2; // 각 점의 좌표 계산

	cout << "두 점 사이의 거리 : " << dist_2d(x1, x2, y1, y2) << endl;

	system("pause");
	return 0;
}
