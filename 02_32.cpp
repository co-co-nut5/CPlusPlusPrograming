#include <iostream>
using namespace std;

int main() {

    int max = 0, num1 = 0, num2 = 1, num3 = 0 ; 
    //사용자가 입력할 수열 범위, num 1,2,3은 피보나치 수열을 계산할 때 사용
    cout << "정수를 입력해 피보나치 수열의 범위를 정하시오. ";
    cin >> max; //입력값을 max에 저장
  
    while (true)
    {
        if (max <= 0) //음수이거나 0일때
        {
            cout << "해당 범위의 피보나치 수는 존재하지 않음"<< endl;
            break; //종료
        }  
        //max가 1이상일 때
        cout << 0 << " " << 1 << " ";
       
        while (true)
        {
            if (max - num1 + 1 <= num3) {//피보나치가 max값에 근접하여 더 이상 계산할 수 없을 때
                break; //종료
            }            
            else //계산 가능 할 때
            {
                num3 = num1 + num2; //현재 계산할 수는 바로 왼쪽(num2)와 더 왼쪽(num1)를 더한 값이다.
                cout << num3 << " ";

                num1 = num2; //바로 왼쪽값을 더 왼쪽으로 바꿈
                num2 = num3; //현재 계산한 값을 바로 왼쪽으로 바꿈
            }
        }
        break;
    }
    cout << endl;
    system("pause");
    return 0;
}