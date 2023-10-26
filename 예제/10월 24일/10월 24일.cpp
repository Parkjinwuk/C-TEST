#include <iostream>
using namespace std;

/*
// (예제 5-1) '값에 의한 호출'시 매개 변수의 생성자 실행되지 않음
class Circle {
private:
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle();
	double getArea() { return 3.14 * radius * radius; }
	int getRadius() { return radius; }
	void setRadius(int radius) { this->radius = radius; }
};

Circle::Circle() {
	radius = 1;
	cout << "생성자 실행 radius = " << radius << endl;
}

Circle::Circle(int radius) {
	this->radius = radius;
	cout << "생성자 실행 radius = " << radius << endl;
}

Circle::~Circle() {
	cout << "소멸자 실행 radius = " << radius << endl;
}

void increase(Circle c) {	// 객체 c의 생성사 실행되지 않음
	int r = c.getRadius();
	c.setRadius(r + 1);
}	// 객체 c의 소멸자 실행됨

int main() {
	Circle waffle(30);
	increase(waffle);	// waffle의 내용이 그대로 c에 복사
	cout << waffle.getRadius() << endl;
}
*/

// (예제4-1) 객체 포인터 선언 및 활용
/*
class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	double getArea();
};

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle donut;
	Circle pizza(30);

	// 객체 이름으로 멤버 접근
	cout << donut.getArea() << endl;

	// 객체 포인터로 멤버 접근
	Circle* p;
	p = &donut;
	cout << p->getArea() << endl;
	cout << (*p).getArea() << endl;

	p = &pizza;
	cout << p->getArea() << endl;
	cout << (*p).getArea() << endl;
}
*/

// (예제 4-2) Circle 클래스의 배열 선언 및 활용
/*
class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	void setRadius(int r) { radius = r; }
	double getArea();
};

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle circleArray[3];	// (1) 객체 배열 생성

	// 배열의 각 원소 객체의 멤버 접근
	circleArray[0].setRadius(10);
	circleArray[1].setRadius(20);
	circleArray[2].setRadius(30);

	for (int i = 0; i < 3; i++)
		cout << "Circle " << i << "의 면적은 " << circleArray[i].getArea() << endl;

	Circle* p;
	p = circleArray;
	for (int i = 0; i < 3; i++) {	// 객체 포인터로 배열 접근
		cout << "Circle " << i << "의 면적은 " << p->getArea() << endl;
		p++;	// p는 배열의 다음 원소를 가리킴
	}
}
*/

// (예제 4-3) 객체 배열 초기화
class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	void setRadius(int r) { radius = r; }
	double getArea();
};

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle circleArray[3] = { Circle(10), Circle(20), Circle() };

	for (int i = 0; i < 3; i++)
		cout << "Circle " << i << "의 면적은 " << circleArray[i].getArea() << endl;
}