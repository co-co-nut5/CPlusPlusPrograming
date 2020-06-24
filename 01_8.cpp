#include <iostream>
using namespace std;

int main() {
	int hour, min, sec; //시, 분, 초를 저장하는 변수

	cout << "시, 분, 초 순서대로 입력하시오." << endl; //사용자에게 시, 분, 초를 입력하라는 안내문
	cin >> hour; //사용자로부터 받은 입력값을 시에 저장
	cin >> min; //사용자로부터 받은 입력값을 분에 저장
	cin >> sec; //사용자로부터 받은 입력값을 초에 저장

	cout << hour << "시 " << min << "분 " << sec << "초 는 " << 3600 * hour + 60 * min + sec << "입니다."; 
	//시와 분은 초로 변환하는 가정을 거처 초와 합산해 출력
	
	system("pause");
	return 0;
}