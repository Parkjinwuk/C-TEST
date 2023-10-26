#include <iostream>
#include <string>
using namespace std;

#include "money_pay.h"
#include "car.h"

void car::in_put() {
	string car_num;  // 차량 번호
	string location;  // 주차 위치

	cout << "차량 번호?(예:46육1102) >> ";
	cin >> car_num;
	cout << "주차 위치?(예:A4) >> ";
	cin >> location;

	cout << "차량 번호 : " << car_num << '\n' << "주차 위치 : " << location << '\n' << endl;
}
