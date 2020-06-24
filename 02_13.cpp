#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void printState(int n) { //n(사람 혹은 컴퓨터)의 가위, 바위, 보 상태를 화면에 출력
	if (n == 1) cout << "가위\n";
	else if (n == 2) cout << "바위\n";
	else cout << "보\n";
}
int main() {
	int me = 0, com = 0; //사용자, 컴퓨터
	cout << "가위, 바위, 보에 해당하는 번호를 누르시오." << endl;
	cout << "1 : 가위" << endl << "2 : 바위" << endl << "3 : 보" << endl;
	cin >> me;
	srand((unsigned)time(NULL)); // 현재의 시스템 타임으로 난수발생기 초기화
	com = 1 + rand() % 3; // 처음값 + rand() % 단계, 1~3 중 하나가 com에 저장
	cout << "사용자 : ";
	printState(me);
	cout << "컴퓨터 : ";
	printState(com);

	if (me == com) cout << "사용자와 컴퓨터가 비겼습니다.\n";
	else { //비기지 않았을 때
		for (int i = 1; i < 4; i++) {// 사용자 기준, 가위 바위 보 순서대로 검사
			if (me == i) { //사용자가 가위바위보 범위내에서 냈는지 확인
				if (i == 1) {// 사용자가 가위일때
					if (com == 3) cout << "사용자가 이겼습니다.\n"; //컴퓨터가 보일때
					else cout << "사용자가 졌습니다.\n";//컴퓨터가 바위일때
				}
				else if (i == 2) { // 사용자가 바위일때
					if (com == 1) cout << "사용자가 이겼습니다.\n"; //컴퓨터가 가위일때
					else cout << "사용자가 졌습니다.\n";//컴퓨터가 보일때
				}
				else { //사용자가 보일때
					if (com == 2) cout << "사용자가 이겼습니다.\n"; //컴퓨터가 바위일때
					else cout << "사용자가 졌습니다.\n";//컴퓨터가 가위일때
				}
			}					
		}
	}
	system("pause");
	return 0;
}

