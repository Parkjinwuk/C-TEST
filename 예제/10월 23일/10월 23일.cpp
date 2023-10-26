#include <iostream> 
using namespace std;
// Circle 클래스의 객체 생성 및 활용
/*
class Rectangle { // Rectangle 클래스 선언부
public:
	int width;
	int height;
	int getArea(); // 면적을 계산하여 리턴하는 함수
};

int Rectangle::getArea() { // Rectangle 클래스 구현부
	return width * height;
}

int main() {
	Rectangle rect;
	rect.width = 3;
	rect.height = 5;
	cout << "사각형의 면적은 " << rect.getArea() << endl;
}
*/

//Rectangle 클래스 만들기
/*
class Circle {	// Circle 선언부
public:
	int radius;
	double getArea();
};

double Circle::getArea() {	// Circle 구현부
	return 3.14 * radius * radius;
}

int main() {
	Circle donut;	// 객체 donut 생성
	donut.radius = 1;	// donut의 멤버 변수 접근	// donut 객체의 반지름을 1로 설정
	double area = donut.getArea();	// donut의 멤버 함수 호출	// donut 객체의 면적 알아내기
	cout << "donut의 면적은 " << area << endl;

	Circle pizza;
	pizza.radius = 30;
	area = pizza.getArea();
	cout << "pizza의 면적은 " << area << endl;
}
*/

// 2개의 생성자를 가진 Circle 클래스
/*
class Rectangle {	// Rectangle 클래스 선언
public:
	int width;
	int height;
	int getArea();	// 면적을 계산하여 리턴하는 함수
};

int Rectangle::getArea() {	// Rectangle 클래스 구현
	return width * height;
}

int main() {
	Rectangle rect;
	rect.width = 3;
	rect.height = 5;
	cout << "사각형의 면적은 " << rect.getArea() << endl;
}
*/

/*
class Circle {
public:
	int radius;
	Circle();	// 기본 생성자
	Circle(int r);	// 매개 변수 있는 생성자
	double getArea();
};

Circle::Circle() {
	radius = 1;	// 반지름 값 초기화
	cout << "반지름 " << radius << " 원 생성" << endl;
}

Circle::Circle(int r) {
	radius = r;	// 반지름 값 초기화
	cout << "반지름 " << radius << " 원 생성" << endl;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle donut;	// 매개 변수 없는 생성자 호출
	double area = donut.getArea();
	cout << "donut 면적은 " << area << endl;

	Circle pizza(30);	// 매개 변수 있는 생성자 호출. 30이 r에 전달됨
	area = pizza.getArea();
	cout << "pizza 면적은 " << area << endl;
}
*/

// 생성자에서 다른 생성자 호출 연습(위임 생성자 만들기 연습)
/*
class Circle {
public:
	int radius;
	Circle();	// 위임 생성자
	Circle(int r);	// 타겟 생성자
	double getArea();
};

Circle::Circle():Circle(1){}	// 위임 생성자	// 호출. r에 1 전달

Circle::Circle(int r) {	// 객체 초기화를 전담하는 타겟 생성자
	radius = r;
	cout << "반지름 " << radius << " 원 생성" << endl;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle donut;	// 매개 변수 없는 생성자 호출
	double area = donut.getArea();
	cout << "donut 면적은 " << area << endl;

	Circle pizza(30);	// 매개 변수 있는 생성자 호출
	area = pizza.getArea();
	cout << "pizza 면적은 " << area << endl;
}
*/

// 멤버 변수 초기화와 위임 생성자 활용
/*
class Point {
	int x, y;
public:
	Point();
	Point(int a, int b);
	void show() { cout << "(" << x << ", " << y << ")" << endl; }
};

Point::Point() : Point(0, 0) {}	// 위임 생성자	// Point(int a, intb) 생성자 호출	// 호출. a, b에 모두 0 전달

Point::Point(int a, int b)
	:x(a), y(b) {}

int main() {
	Point origin;
	Point target(10, 20);
	origin.show();
	target.show();
}
*/

// Rectangle 클래스 만들기
/*
class Rectangle {
public:
	int width, height;	// 너비와 높이
	Rectangle();	// 생성자
	Rectangle(int w, int h);	// 생성자
	Rectangle(int length);	// 생성자
	bool isSquare();
};

Rectangle::Rectangle() {	// Rectangle::Rectangle():Rectangle(1){} 로 해도 됨
	width = height = 1;
}

Rectangle::Rectangle(int w, int h) {
	width = w, height = h;
}

Rectangle::Rectangle(int length) {	// Rectangle::Rectangle(int lenght):Rectangle(lenght){} 로 해도 됨
	width = height = length;
}

bool Rectangle::isSquare() {	// bool은 논리값을 나타내는 C++의 기본 타입이다.
	if (width == height) return true;	// true와 false는 참과 거짓을 나타내는 상수이다.
	else return false;
}

int main() {
	Rectangle rect1;
	Rectangle rect2(3,5);
	Rectangle rect3(3);

	if (rect1.isSquare()) cout << "rect1은 정사각형이다." << endl;
	if (rect2.isSquare()) cout << "rect2는 정사각형이다." << endl;
	if (rect3.isSquare()) cout << "rect3는 정사각형이다." << endl;
}
*/

// Circle 클래스에 소멸자 작성 및 실행
/*
class Circle {
public:
	int radius;
	Circle();
	Circle(int r);
	~Circle();
	double getArea();
};

Circle::Circle() {	// Circle::Circle():Circle(1){} 로 해도 됨
	radius = 1;
	cout << "반지름 " << radius << " 원 생성" << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "반지름 " << radius << " 원 생성" << endl;
}

Circle::~Circle() {	// 소멸자 구현
	cout << "반지름 " << radius << " 원 소멸" << endl;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle donut;
	Circle pizza(30);
	return 0;	// main() 함수가 종료하면 main() 함수의 스택에 생성된 pizza, donut 객체가 소멸된다.
}
*/

// 지역 객체와 전역 객체의 생성 및 소멸 순서
/*
class Circle {
public:
	int radius;
	Circle();
	Circle(int r);
	~Circle();
	double getArea();
};

Circle::Circle() :Circle(1) {}

Circle::Circle(int r) {
	radius = r;
	cout << "반지름 " << radius << " 원 생성" << endl;
}

Circle::~Circle() {
	cout << "반지름 " << radius << " 원 소멸" << endl;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

Circle globalDonut(1000);
Circle globalPizza(2000);

void f() {
	Circle fDonut(100);
	Circle fPizza(200);
}

int main()
{
	Circle mainDonut;
	Circle mainPizza(30);
	f();
}
*/

// Circle 클래스를 C++ 구조체를 이용하여 재작성
/*
struct StructCircle {	// C++ 구조체 선언
private:
	int radius;
public:
	StructCircle(int r) { radius = r; }	// 구조체의 생성자
	double getArea();
};

double StructCircle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	StructCircle waffle(3);
	cout << "면적은 " << waffle.getArea();
}
*/

