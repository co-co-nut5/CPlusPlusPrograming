#include <iostream>
using namespace std;

int main() {

    int max = 0, num1 = 0, num2 = 1, num3 = 0 ; 
    //����ڰ� �Է��� ���� ����, num 1,2,3�� �Ǻ���ġ ������ ����� �� ���
    cout << "������ �Է��� �Ǻ���ġ ������ ������ ���Ͻÿ�. ";
    cin >> max; //�Է°��� max�� ����
  
    while (true)
    {
        if (max <= 0) //�����̰ų� 0�϶�
        {
            cout << "�ش� ������ �Ǻ���ġ ���� �������� ����"<< endl;
            break; //����
        }  
        //max�� 1�̻��� ��
        cout << 0 << " " << 1 << " ";
       
        while (true)
        {
            if (max - num1 + 1 <= num3) {//�Ǻ���ġ�� max���� �����Ͽ� �� �̻� ����� �� ���� ��
                break; //����
            }            
            else //��� ���� �� ��
            {
                num3 = num1 + num2; //���� ����� ���� �ٷ� ����(num2)�� �� ����(num1)�� ���� ���̴�.
                cout << num3 << " ";

                num1 = num2; //�ٷ� ���ʰ��� �� �������� �ٲ�
                num2 = num3; //���� ����� ���� �ٷ� �������� �ٲ�
            }
        }
        break;
    }
    cout << endl;
    system("pause");
    return 0;
}