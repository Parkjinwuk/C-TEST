#include <iostream>
#include <string>
using namespace std;

#include "money_pay.h"
#include "car.h"

void money_pay::pay() {
	int a, b;
	int time_in;  // 입차 시간
	int time_out;  // 출차 시간
	char disable;  // 장애인 유무
	int money = 0;

	cout << "입차 시간?(예:12시 38분 -> 1238) >> ";
	cin >> time_in;
	cout << "출차 시간?(예:13시 52분 -> 1352) >> ";
	cin >> time_out;
	cout << "장애인 차량입니까?(예:o/x) >> ";
	cin >> disable;

	a = (((time_out / 100) * 60 + (time_out % 100)) - ((time_in / 100) * 60 + (time_in % 100))) / 60;
	b = (((time_out / 100) * 60 + (time_out % 100)) - ((time_in / 100) * 60 + (time_in % 100))) % 60;

	cout << "이용시간은 " << a << "시간" << b << "분 입니다." << endl;
	cout << "장애인 유무 : " << disable << "\n" << endl;
	if (disable == 'x')
	{
		if (b > 0 && b <= 10) {
			money = a * 2000 + 400;
		}

		if (b > 10 && b <= 20) {
			money = a * 2000 + 800;
		}

		if (b > 20 && b <= 30) {
			money = a * 2000 + 1000;
		}

		if (b > 30 && b <= 40) {
			money = a * 2000 + 1400;
		}

		if (b > 40 && b <= 50) {
			money = a * 2000 + 1800;
		}

		if (b > 50 && b <= 60 || b == 0) {
			money = a * 2000;
			cout << "이용 가격은 " << money << "원 입니다." << endl;
		}
	}
	else if (disable == 'o')
	{
		if (b > 0 && b <= 10) {
			money = (a * 2000 + 400) / 2;
		}

		if (b > 10 && b <= 20) {
			money = (a * 2000 + 800) / 2;
		}

		if (b > 20 && b <= 30) {
			money = (a * 2000 + 1000) / 2;
		}

		if (b > 30 && b <= 40) {
			money = (a * 2000 + 1400) / 2;
		}

		if (b > 40 && b <= 50) {
			money = (a * 2000 + 1800) / 2;
		}

		if (b > 50 && b <= 60 || b == 0) {
			money = (a * 2000) / 2;
		}
		cout << "이용 가격은 " << money << "원 입니다." << "(할인 50%)" << endl;
	}

	
}