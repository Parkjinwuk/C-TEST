#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;
/*
class cafe_menu {

};

class cafe {
	int num;
	int cost = 0;
public:
	
	int coffee();
};

cafe::cafe() {
	while (1) {
		cin >> num;
		if (num == 0) {
			cout << "========== ��� �� ==========";
			break;
		}
		else if (num < 0)
		{
			cout << num << " �� ���� �޴��Դϴ�..." << endl;
			break;
		}

		switch (num) {
		case 1: cout << "ī��_�Ƹ޸�ī�� Short 3600\n";
			cost += 3600; break;
		case 2: cout << "ī��_�Ƹ޸�ī�� Tall 4100\n";
			cost += 4100; break;
		case 3: cout << "ī��_�� Short 4100\n";
			cost += 4100; break;
		case 4: cout << "ī��_�� Tall 4600\n";
			cost += 4600; break;
		case 5: cout << "īǪġ�� Short 4100\n";
			cost += 4100; break;
		case 6: cout << "īǪġ�� Tall 4600\n";
			cost += 4600; break;
		case 7: cout << "ī���ī Short 4100\n";
			cost += 4100; break;
		case 8: cout << "ī���ī Tall 4600\n";
			cost += 4600; break;
		case 9: cout << "ī���_��Ű�ƶ� Short 5100\n";
			cost += 5100; break;
		case 10: cout << "ī���_��Ű�ƶ� Tall 5600\n";
			cost += 5600; break;
		case 11: cout << "��Ÿ����_��ü_�� Short 5100\n";
			cost += 5100; break;
		case 12: cout << "��Ÿ����_��ü_�� Tall 5600\n";
			cost += 5600; break;
		}
		
	}
	cout << "����� �Ѱ� : " << cost << endl;
}
*/


int main() {
	int num;
	int cost = 0;
	int sell = 0;

	cout << "========== CAFE MENU ����Ʈ ==========\n";
	cout << "1. ī��_�Ƹ޸�ī�� Short 3600\n";
	cout << "2. ī��_�Ƹ޸�ī�� Tall 4100\n";
	cout << "3. ī��_�� Short 4100\n";
	cout << "4. ī��_�� Tall 4600\n";
	cout << "5. īǪġ�� Short 4100\n";
	cout << "6. īǪġ�� Tall 4600\n";
	cout << "7. ī���ī Short 4100\n";
	cout << "8. ī���ī Tall 4600\n";
	cout << "9. ī���_��Ű�ƶ� Short 5100\n";
	cout << "10. ī���_��Ű�ƶ� Tall 5600\n";
	cout << "11. ��Ÿ����_��ü_�� Short 5100\n";
	cout << "12. ��Ÿ����_��ü_�� Tall 5600\n\n\n";

	cout << "�޴��� ����ּ��� >> (0 �Է½� ��� ����) ";

	while (1) {
		cin >> num;
		if (num == 0) {
			cout << "========== ��� �� ==========\n";
			break;
		}
		else if (num < 0)
		{
			cout << num << " �� ���� �޴��Դϴ�..." << endl;
			break;
		}

		switch (num) {

		case 1: cout << "ī��_�Ƹ޸�ī�� Short 3600\n";
			cost += 3600; 
			sell++; break;
		case 2: cout << "ī��_�Ƹ޸�ī�� Tall 4100\n";
			cost += 4100; 
			sell++; break;
		case 3: cout << "ī��_�� Short 4100\n";
			cost += 4100; 
			sell++; break;
		case 4: cout << "ī��_�� Tall 4600\n";
			cost += 4600; 
			sell++; break;
		case 5: cout << "īǪġ�� Short 4100\n";
			cost += 4100; 
			sell++; break;
		case 6: cout << "īǪġ�� Tall 4600\n";
			cost += 4600; 
			sell++; break;
		case 7: cout << "ī���ī Short 4100\n";
			cost += 4100; 
			sell++; break;
		case 8: cout << "ī���ī Tall 4600\n";
			cost += 4600; 
			sell++; break;
		case 9: cout << "ī���_��Ű�ƶ� Short 5100\n";
			cost += 5100; 
			sell++; break;
		case 10: cout << "ī���_��Ű�ƶ� Tall 5600\n";
			cost += 5600; 
			sell++; break;
		case 11: cout << "��Ÿ����_��ü_�� Short 5100\n";
			cost += 5100; 
			sell++; break;
		case 12: cout << "��Ÿ����_��ü_�� Tall 5600\n";
			cost += 5600; 
			sell++; break;
		}

	}
	cout << "����� �Ѱ� : " << cost << endl;
	cout << "�ȸ� ���� : " << sell << endl;
}
