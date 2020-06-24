#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int ROWS = 5; //행
const int COLS = 5; //열

void printBoard(int board[][COLS]) { //현재 보드판의 상태를 출력
	cout << "  | 0 1 2 3 4" << endl;
	cout << " -| - - - - -" << endl;
	for (int i = 0; i < ROWS; i++) {
		cout << i << " | ";
		for (int j = 0; j < COLS; j++) {

			cout << board[i][j] << " ";

		}

		cout << endl;
	}
	cout << endl;
	cout << endl;
}

bool checkFinish(int board[][COLS]) { //벌레가 모든 곳을 방문했는 지 확인

	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			if (board[i][j] == 0) {//벌레가 도착하지 않은 칸이 존재함
				return false; //아직 모든 곳에 방문하지 않음을 반환
			} 
		}
	}
	return true;//모든 곳에 방문함을 리턴
}

void checkMax(int boardOfCount[][COLS]) { //보드판 중 벌레가 어느 위치를 가장 많이 갔는지 출력

	int maxX = 0 , maxY = 0; //가장 많이 간곳의 좌표 x, y

	printBoard(boardOfCount);

	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			if (boardOfCount[i][j] > boardOfCount[maxX][maxY]) {//현재 가장 큰 값보다 현재 위치의 값이 크다면
				//현재 위치를 가장 큰 값으로 변경
				maxX = i;
				maxY = j;
			}
		}
	}

	cout << "가장 많이 방문한 곳 좌표 (행 : " << maxX << ", 열 : " << maxY <<")"<< endl;
	cout << "가장 많이 방문한 횟수 : " << boardOfCount[maxX][maxY] << endl;
}


int getLocationX(int randomNum, int x) { //현재 주어진 값으로 x축 좌표를 계산하는 함수
	if (randomNum == 0) {
		x -= 1;
	}
	else if (randomNum == 1) {
		x -= 1;
	}
	else if (randomNum == 2) {
		x = x;
	}
	else if (randomNum == 3) {
		x += 1;
	}
	else if (randomNum == 4) {
		x += 1;
	}
	else if (randomNum == 5) {
		x += 1;
	}
	else if (randomNum == 6) {
		x = x;
	}
	else {//randomNum == 7
		x -= 1;
	}
	return x; //계산된 x축 좌표 반환
}

int getLocationY(int randomNum, int y) { //현재 주어진 값으로 y축 좌표를 계산하는 함수
	if (randomNum == 0) {
		y = y;
	}
	else if (randomNum == 1) {
		y += 1;
	}
	else if (randomNum == 2) {
		y += 1;
	}
	else if (randomNum == 3) {
		y += 1;
	}
	else if (randomNum == 4) {
		y = y;
	}
	else if (randomNum == 5) {
		y -= 1;
	}
	else if (randomNum == 6) {
		y -= 1;
	}
	else {//randomNum == 7
		y -= 1;
	}
	return y; //계산된 y축 좌표 반환

}


int main() {
	
	int x = ROWS / 2, y = COLS / 2; //벌레의 처음 위치, 실제위치
	int tmpx = 0, tmpy = 0; //벌레의 위치 계산에 필요한 임시위치
	int randomNum = 0; //랜덤값을 부여받는 수
	int countOfMove = 0; //총 벌레의 이동횟수를 계산하는 수
	int board[ROWS][COLS] = { 0 }; //실제 게임판
	int boardOfCount[ROWS][COLS] = { 0 }; //벌레가 방에 도착한 횟수를 세는 배열

	board[x][y] = { 1 }; //처음 시작위치는 이미 정착한 곳이기 때문에 1로 초기화

	srand((unsigned)time(NULL)); //시스템 시간에 따른 랜덤 초기화

	while (checkFinish(board) == false) { //모든 칸에 정착 했었는지 확인하기
		//1. 랜덤 숫자 구하기
		randomNum = rand() % 8; //rand() % 단계, 0~7 중 하나가 randomNum에 저장
		cout <<"입력값 : " << randomNum<< endl;
		
		//2. 어디로 가는 지 위치 파악하기
		
		//어디로 갈지 좌표를 계산하는 과정
		tmpx = getLocationX(randomNum, x);
		tmpy = getLocationY(randomNum, y);
		
		//x, y좌표 모두 0에서 4사이의 값만 가질 수 있음
		if (tmpx >= 0 && tmpx <= 4 && tmpy >= 0 && tmpy <= 4) {
			//조건문을 모두 통과하면 보드판에서 이동할 수 있는 곳

			//임시 좌표를 실제 좌표로 설정
			x = tmpx;
			y = tmpy;

			board[x][y] = { 1 }; //해당 칸이 벌레가 정착한 곳을 표기
			boardOfCount[x][y] += 1; //해당 칸에 도착한 횟수를 1만큼 더하기
			printBoard(board); //현재 보드판 상태 출력
			countOfMove++; //총 이동횟수에 1을 더하기
		}
		
		else { //이동할 수 없는 곳(이동횟수로 치지 않음)
			cout << "해당 입력값은 벌레가 이동할 수 없는 칸입니다."<< endl << endl;
		}		
	}
	cout <<"벌레의 총 이동횟수 : "<< countOfMove << endl;
	checkMax(boardOfCount); //가장 많이 방문한 곳을 계산한뒤 출력

	system("pause");
	return 0;

}