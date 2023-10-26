#include <iostream>
#include <string>
using namespace std;

#include "car.h"
#include "money_pay.h"

int main() {
	
	car car_num;
	car_num.in_put();
	
	money_pay mp;
	mp.pay();
}