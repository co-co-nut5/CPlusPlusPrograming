#include <iostream>
using namespace std;

void print_menu() { //메뉴의 이름을 화면에 출력하는 함수
	cout << "1. 뿌링클\n" << "2. 왕천\n" << "3. 예통\n" 
		<< "4. 종료\n" << "원하는 메뉴를 선택하시오. ";
}
void menu1() { //1번 메뉴 선택시 수행하는 함수
	cout << "\n1. 뿌링클을 선택하셨습니다.\n\n" << "뿌링클 맛있졍\n\n";
}
void menu2() {//2번 메뉴 선택시 수행하는 함수
	cout << "\n2. 왕천을 선택하셨습니다.\n\n" << "왕천은 파가 많앙\n\n";
}
void menu3() {//3번 메뉴 선택시 수행하는 함수
	cout << "\n3. 예통을 선택하셨습니다.\n\n" << "예통은 짜\n\n";
}
void menu4() {//4번 메뉴 선택시 수행하는 함수
	cout << "\n4. 종료를 선택하셨습니다.\n\n";
}

int get_menu_number() {
	// 사용자로 부터 메뉴를 입력받고, 올바른 범위의 메뉴를 선택했는 지 확인하는 함수
	int order = 0; //사용자가 입력한 메뉴번호를 저장하는 변수

	print_menu(); //메뉴 이름 출력
	cin >> order; //메뉴 입력받기
	cin.ignore();

	if (order < 1 || order > 4) return 5; //범위 이외의 번호일때
	else return order; //범위 안의 번호일떄 해당 메뉴 반환
}

int main() {
	int order = 0; //사용자가 입력한 메뉴번호를 저장하는 변수

	while (true) {
		order = get_menu_number(); //사용자가 입력한 메뉴번호를 저장
		if (order != 5) {//범위 내의 값이라면
			if (order == 1) menu1(); //1번 메뉴 호출
			else if (order == 2) menu2(); //2번 메뉴 호출
			else if (order == 3) menu3(); //3번 메뉴 호출
			else { //4번 메뉴 호출(종료)
				menu4();
				break; //종료
			}		
		}
		else { //범위 외의 값이라면
			cout << "\n메뉴번호를 정확하게 입력해주세요.\n\n";
		}	
	}

	system("pause");
	return 0;
}