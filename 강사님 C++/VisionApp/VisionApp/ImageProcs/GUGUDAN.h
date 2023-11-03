#pragma once

#include <iostream>
#include <string>
#include <vector>

class GUGUDAN 
{
public:
	GUGUDAN();
	~GUGUDAN();
	void SetPara(size_t dan_start = 0, size_t dan_end = 0, size_t  step_start = 0, size_t step_end = 0);
	int Proc();
	void Display();
private:
	size_t _dan_start, _dan_end, _step_start, _step_end;
	std::vector<std::string> vMsg;
};