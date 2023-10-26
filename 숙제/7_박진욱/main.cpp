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
			cout << "========== 장사 끝 ==========";
			break;
		}
		else if (num < 0)
		{
			cout << num << " 는 없는 메뉴입니다..." << endl;
			break;
		}

		switch (num) {
		case 1: cout << "카페_아메리카노 Short 3600\n";
			cost += 3600; break;
		case 2: cout << "카페_아메리카노 Tall 4100\n";
			cost += 4100; break;
		case 3: cout << "카페_라떼 Short 4100\n";
			cost += 4100; break;
		case 4: cout << "카페_라떼 Tall 4600\n";
			cost += 4600; break;
		case 5: cout << "카푸치노 Short 4100\n";
			cost += 4100; break;
		case 6: cout << "카푸치노 Tall 4600\n";
			cost += 4600; break;
		case 7: cout << "카페모카 Short 4100\n";
			cost += 4100; break;
		case 8: cout << "카페모카 Tall 4600\n";
			cost += 4600; break;
		case 9: cout << "카라멜_마키아또 Short 5100\n";
			cost += 5100; break;
		case 10: cout << "카라멜_마키아또 Tall 5600\n";
			cost += 5600; break;
		case 11: cout << "스타벅스_돌체_라떼 Short 5100\n";
			cost += 5100; break;
		case 12: cout << "스타벅스_돌체_라떼 Tall 5600\n";
			cost += 5600; break;
		}
		
	}
	cout << "매출액 총계 : " << cost << endl;
}
*/


int main() {
	int num;
	int cost = 0;
	int sell = 0;

	cout << "========== CAFE MENU 리스트 ==========\n";
	cout << "1. 카페_아메리카노 Short 3600\n";
	cout << "2. 카페_아메리카노 Tall 4100\n";
	cout << "3. 카페_라떼 Short 4100\n";
	cout << "4. 카페_라떼 Tall 4600\n";
	cout << "5. 카푸치노 Short 4100\n";
	cout << "6. 카푸치노 Tall 4600\n";
	cout << "7. 카페모카 Short 4100\n";
	cout << "8. 카페모카 Tall 4600\n";
	cout << "9. 카라멜_마키아또 Short 5100\n";
	cout << "10. 카라멜_마키아또 Tall 5600\n";
	cout << "11. 스타벅스_돌체_라떼 Short 5100\n";
	cout << "12. 스타벅스_돌체_라떼 Tall 5600\n\n\n";

	cout << "메뉴를 골라주세요 >> (0 입력시 장사 종료) ";

	while (1) {
		cin >> num;
		if (num == 0) {
			cout << "========== 장사 끝 ==========\n";
			break;
		}
		else if (num < 0)
		{
			cout << num << " 는 없는 메뉴입니다..." << endl;
			break;
		}

		switch (num) {

		case 1: cout << "카페_아메리카노 Short 3600\n";
			cost += 3600; 
			sell++; break;
		case 2: cout << "카페_아메리카노 Tall 4100\n";
			cost += 4100; 
			sell++; break;
		case 3: cout << "카페_라떼 Short 4100\n";
			cost += 4100; 
			sell++; break;
		case 4: cout << "카페_라떼 Tall 4600\n";
			cost += 4600; 
			sell++; break;
		case 5: cout << "카푸치노 Short 4100\n";
			cost += 4100; 
			sell++; break;
		case 6: cout << "카푸치노 Tall 4600\n";
			cost += 4600; 
			sell++; break;
		case 7: cout << "카페모카 Short 4100\n";
			cost += 4100; 
			sell++; break;
		case 8: cout << "카페모카 Tall 4600\n";
			cost += 4600; 
			sell++; break;
		case 9: cout << "카라멜_마키아또 Short 5100\n";
			cost += 5100; 
			sell++; break;
		case 10: cout << "카라멜_마키아또 Tall 5600\n";
			cost += 5600; 
			sell++; break;
		case 11: cout << "스타벅스_돌체_라떼 Short 5100\n";
			cost += 5100; 
			sell++; break;
		case 12: cout << "스타벅스_돌체_라떼 Tall 5600\n";
			cost += 5600; 
			sell++; break;
		}

	}
	cout << "매출액 총계 : " << cost << endl;
	cout << "팔린 개수 : " << sell << endl;
}
