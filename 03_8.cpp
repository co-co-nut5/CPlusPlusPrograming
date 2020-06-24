#include <iostream>
#include <cmath>
#include <cstdlib>
#include <time.h>

using namespace std;

int rand_range(int s, int e) {
	//srand((unsigned)time(NULL)); 
	//현재의 시스템 타임으로 난수발생기 초기화
	//같은값이 600번이 출력되는 오류가 있어 삭제함 

	return (s - 1 + rand() % e); // 처음값-1 + rand() % 단계
}

int main() {
	int rand_num = 0; //랜덤 수 저장
	double countOfNum[6] = {0.0}; //0,1,2,3,4,5가 각각 몇 번 나왔는지 저장하는 배열

	for (int i = 0; i < 600; i++) {
		rand_num = rand_range(1, 6); //0,1,2,3,4,5 중 하나 저장

		for (int j = 0; j < 6; j++) {//0,1,2,3,4,5가 각각 몇 번 나왔는지
			if(rand_num == j) countOfNum[j] += 1.0; //배열에 각각 저장
		}		
		rand_num = 0; //변수 초기화
	}

	for (int k = 0; k < 6; k++) {
		cout << k << "의 확률 : " << countOfNum[k]/600.0 << endl; // 확률 계산
	}

	cout << "통계에 따라 근사한 확률을 가짐" << endl;
	system("pause");
	return 0;
}