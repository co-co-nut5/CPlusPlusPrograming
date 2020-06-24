#include <iostream>
using namespace std;

int main() {
	
	int x, y; // x좌표와 y좌표를 저장하는 변수
	bool tmp; //x좌표와 y좌표의 사분면을 연산할 때 쓰이는 변수
	int ans; //사분면을 저장하는 변수

	cout << "x좌표 : "; //사용자가 x좌표를 입력하라는 안내문
	cin >> x; //사용자의 입력값이 x에 저장
	cout << "y좌표 : "; //사용자가 y좌표를 입력하라는 안내문
	cin >> y; //사용자의 입력값이 y에 저장

	if (x != 0 && y != 0) { //사분면 위에 점이 존재할 때
		tmp = (x > 0) ? true : false; //x좌표가 0보다 크다면 true, 작으면 false 반환
		if (tmp == true) { // 1사분면 혹은 4사분면일 때
			ans = (y > 0) ? 1 : 4; //y좌표가 0보다 크면 1사분면, 작으면 4사분면
		}
		else { //2사분면 혹은 3사분면일 때
			ans = (y > 0) ? 2 : 3; //y좌표가 0보다 크면 2사분면, 작으면 3사분면
		}

		cout << ans << "사분면입니다."; //사분면 출력
	}
	else { //x축, y축에 하나라도 점이 걸치거나, 입력받은 점이 원점일 때
		cout <<"사분면에 포함되지 않습니다.";
	}

	system("pause");
	return 0;
}