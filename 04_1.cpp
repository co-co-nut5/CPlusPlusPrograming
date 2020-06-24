#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int ROWS = 5; //��
const int COLS = 5; //��

void printBoard(int board[][COLS]) { //���� �������� ���¸� ���
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

bool checkFinish(int board[][COLS]) { //������ ��� ���� �湮�ߴ� �� Ȯ��

	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			if (board[i][j] == 0) {//������ �������� ���� ĭ�� ������
				return false; //���� ��� ���� �湮���� ������ ��ȯ
			} 
		}
	}
	return true;//��� ���� �湮���� ����
}

void checkMax(int boardOfCount[][COLS]) { //������ �� ������ ��� ��ġ�� ���� ���� ������ ���

	int maxX = 0 , maxY = 0; //���� ���� ������ ��ǥ x, y

	printBoard(boardOfCount);

	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			if (boardOfCount[i][j] > boardOfCount[maxX][maxY]) {//���� ���� ū ������ ���� ��ġ�� ���� ũ�ٸ�
				//���� ��ġ�� ���� ū ������ ����
				maxX = i;
				maxY = j;
			}
		}
	}

	cout << "���� ���� �湮�� �� ��ǥ (�� : " << maxX << ", �� : " << maxY <<")"<< endl;
	cout << "���� ���� �湮�� Ƚ�� : " << boardOfCount[maxX][maxY] << endl;
}


int getLocationX(int randomNum, int x) { //���� �־��� ������ x�� ��ǥ�� ����ϴ� �Լ�
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
	return x; //���� x�� ��ǥ ��ȯ
}

int getLocationY(int randomNum, int y) { //���� �־��� ������ y�� ��ǥ�� ����ϴ� �Լ�
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
	return y; //���� y�� ��ǥ ��ȯ

}


int main() {
	
	int x = ROWS / 2, y = COLS / 2; //������ ó�� ��ġ, ������ġ
	int tmpx = 0, tmpy = 0; //������ ��ġ ��꿡 �ʿ��� �ӽ���ġ
	int randomNum = 0; //�������� �ο��޴� ��
	int countOfMove = 0; //�� ������ �̵�Ƚ���� ����ϴ� ��
	int board[ROWS][COLS] = { 0 }; //���� ������
	int boardOfCount[ROWS][COLS] = { 0 }; //������ �濡 ������ Ƚ���� ���� �迭

	board[x][y] = { 1 }; //ó�� ������ġ�� �̹� ������ ���̱� ������ 1�� �ʱ�ȭ

	srand((unsigned)time(NULL)); //�ý��� �ð��� ���� ���� �ʱ�ȭ

	while (checkFinish(board) == false) { //��� ĭ�� ���� �߾����� Ȯ���ϱ�
		//1. ���� ���� ���ϱ�
		randomNum = rand() % 8; //rand() % �ܰ�, 0~7 �� �ϳ��� randomNum�� ����
		cout <<"�Է°� : " << randomNum<< endl;
		
		//2. ���� ���� �� ��ġ �ľ��ϱ�
		
		//���� ���� ��ǥ�� ����ϴ� ����
		tmpx = getLocationX(randomNum, x);
		tmpy = getLocationY(randomNum, y);
		
		//x, y��ǥ ��� 0���� 4������ ���� ���� �� ����
		if (tmpx >= 0 && tmpx <= 4 && tmpy >= 0 && tmpy <= 4) {
			//���ǹ��� ��� ����ϸ� �����ǿ��� �̵��� �� �ִ� ��

			//�ӽ� ��ǥ�� ���� ��ǥ�� ����
			x = tmpx;
			y = tmpy;

			board[x][y] = { 1 }; //�ش� ĭ�� ������ ������ ���� ǥ��
			boardOfCount[x][y] += 1; //�ش� ĭ�� ������ Ƚ���� 1��ŭ ���ϱ�
			printBoard(board); //���� ������ ���� ���
			countOfMove++; //�� �̵�Ƚ���� 1�� ���ϱ�
		}
		
		else { //�̵��� �� ���� ��(�̵�Ƚ���� ġ�� ����)
			cout << "�ش� �Է°��� ������ �̵��� �� ���� ĭ�Դϴ�."<< endl << endl;
		}		
	}
	cout <<"������ �� �̵�Ƚ�� : "<< countOfMove << endl;
	checkMax(boardOfCount); //���� ���� �湮�� ���� ����ѵ� ���

	system("pause");
	return 0;

}