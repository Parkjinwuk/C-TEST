#include <iostream>
#include <vector>
#include <string>
//#1. function of GuGuDan
//#2. class of GuGuDan
//    setParams, proc, display
/*
class Shape
{
public:
	Shape()
		:a(0)	// member initialize
		, b(10)
	{
		// copy operator
		a = 1;
		b = 2;
		std::cout << "Ctor" << std::endl;
	}
	~Shape();
private:
	int a, b;
	int* pA;
};
#define CIRCLE 100
#define RECTANGLE 101
const size_t _CIRCLE = 100;	// define 보다는 const를 사용하라.

enum EShape{
	eCircle = 0,
	eRectangle,
	eTriangle,
	ePoly,
	eShapeMax
};

int main()
{
	int a = 1;
	// int ctor -> instance -> |a| -> operator '=' -> 1
	int b(2);
	// int ctor -> instance + 2 (initialized)
	char byChar = 'A';
	int c = a + b;
	std::cout << c << "\t=\t" << a << "\t+\t" << b << std::endl;

	int* pA = nullptr;
	std::cout << "size of pointer pA = " << sizeof(pA) << std::endl;

	EShape _eShape = EShape::eCircle;
//	int* pShape = new int[EShape::eShapeMax];
//	memset((void*)pShape, 0, sizeof(int)* EShape::eShapeMax);

	int* pShape = nullptr;
	for (size_t i = 0; i < 100; i++)
	{
		pShape = new int[EShape::eShapeMax];
		memset((void*)pShape, 0, sizeof(int) * EShape::eShapeMax);
	}

	// destroy
	if (pShape != nullptr)
	{
		delete[] pShape;
		pShape = nullptr;
	}

	std::vector<int> vShape(EShape::eShapeMax, 0);
	vShape[0] = 1;
	vShape[1] = 2;
	vShape[2] = 3;
	vShape[3] = 4;

	return 1;
}
*/

// QUIZ
// if...for...
// GuGuDan
// input : dan_start, end(2~9)
// intput : step_start, end(1~9)

// dan : 2~9, step : 1~9
// 2*1 = 2		3*1 = 3		...		9*1 = 9
// 2*2 = 4		3*2 = 6		...		9*2 = 18
// ...
// 2*9 = 18		3*9 = 27	...		9*9 = 81

// dan : 2~9, step : 9~9
// 2*9 = 18		3*9 = 27	...		9*9 = 81

int main()
{
	// 내 코드
	int dan, step, dan_start, step_start;

	for (step = 1; step < 10; step++)
	{
		for (dan = 2; dan < 10; dan++)
		{
			std::cout << dan << " * " << step << " = " << dan * step << "\t";
		}
		std::cout << "\n";
	}

	std::cout << "dan_start : ";
	std::cin >> dan_start;
	std::cout << "step_start : ";
	std::cin >> step_start;

	if (dan_start < 10 && step_start < 10 && dan_start > 1 && step_start > 0)
	{
		for (step = step_start; step < 10; step++)
		{
			for (dan = dan_start; dan < 10; dan++)
			{
				std::cout << dan << " * " << step << " = " << dan * step << "\t";
			}
			std::cout << "\n";
		}
	}

	else
	{
		std::cout << "이것은 2단부터 시작하는 GuGuDan 입니다" << std::endl;
	}

	// 강사님 코드 (다 못적음)
	/*
	int DanS, DanE, StepS, StepE;
	DanS = 2, DanE = 9, StepS = 1, StepE = 9;
	for (size_t step = StepS; step <= StepE; step++)
	{
		std::string msg = "";
		for (size_t dan = DanS; dan <= DanE; dan++)
		{
			size_t result = dan * step;
			std::string str = "";

		}
	}
	*/
}