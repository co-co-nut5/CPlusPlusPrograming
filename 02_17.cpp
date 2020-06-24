#include <iostream>

using namespace std;


int main() {
	int flag = 0;//학점 출력 여부
	double mid, fin, quiz, result; //중간고사, 기말고사, 퀴즈, 가중 평균값
	
	cout << "중간고사, 기말고사, 퀴즈 점수 순으로 입력하시오.\n";
	cin >> mid; //사용자로 부터 중간고사 점수를 저장
	cin >> fin;//사용자로 부터 기말고사 점수를 저장
	cin >> quiz;//사용자로 부터 퀴즈 점수를 저장

	result = (0.4 * mid) + (0.5 * fin) + (0.1 * quiz); //점수 가중 평균값 계산

	while (true) {

		if (result >= 90) { //가중 평균값이 90 이상
			cout << "학점은 A입니다." << endl;
			break;
		}
		else if (result >= 80) { //가중 평균값이 80 이상
			cout << "학점은 B입니다." << endl;
			break;

		}
		else if (result >= 70) { //가중 평균값이 70 이상
			cout << "학점은 C입니다." << endl;			
			break;

		}
		else if (result >= 60) { //가중 평균값이 60 이상
			cout << "학점은 D입니다." << endl;
			break;

		} 
		else {//가중 평균값이 60 미만
			cout << "학점은 F입니다." << endl;
			break;
		}		
	}	
	
	system("pause");

	return 0;

}