#pragma once
#include <iostream>
#include <string>
#include <vector>

class GuGuDan
{
public:
	GuGuDan();
	~GuGuDan();
	void SetParam(size_t DanS = 0 , size_t DanE = 0, size_t StepS = 0, size_t StepE = 0);
	int Proc();
	void Display();

private:
	size_t _DanS, _DanE, _StepS, _StepE;
};