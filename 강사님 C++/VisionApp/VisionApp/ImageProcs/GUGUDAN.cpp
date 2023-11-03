#include "GUGUDAN.h"

GUGUDAN::GUGUDAN()
    :_dan_start(0)
    , _dan_end(0)
    , _step_start(0)
    , _step_end(0)
{
    std::cout << "GUGUDAN::Ctor" << std::endl;
}

GUGUDAN::~GUGUDAN() 
{
    std::cout << "GUGUDAN::Dtor" << std::endl;
}

void GUGUDAN::SetPara(size_t dan_start, size_t dan_end, size_t  step_start, size_t step_end)
{
    std::cout << "GuGuDan::SetParams" << std::endl;

    this->_dan_start = dan_start;
    this->_dan_end = dan_end;
    this->_step_start = step_start;
    this->_step_end = step_end;
    /*
    _dan_start = dan_start;
    _dan_end = dan_end;
    _step_start = step_start;
    _step_end = step_end;
    */
}

int GUGUDAN::Proc()
{
    std::cout << "GuGuDan::Proc" << std::endl;

    vMsg.clear();//
    for (size_t step = _step_start; step <= _step_end; step++)
    {
        std::string msg = "";
        for (size_t dan = _dan_start; dan <= _dan_end; dan++)
        {
            size_t result = dan * step;
            std::string str = "";
            str = std::to_string(dan);
            str += "*";
            str += std::to_string(step);
            str += "=";
            str += std::to_string(result);
            msg += str + "\t";
        }
        vMsg.push_back(msg);
        //std::cout << msg << std::endl;
    }

    return 0;
}

void GUGUDAN::Display()
{
    std::cout << "GuGuDan::Display" << std::endl;

    // for basic
    // for inRange(start, end, inc)
    for (size_t i = 0; i < vMsg.size(); i++)
    {
        std::cout << vMsg[i] << std::endl;
    }
    // for range with iter
    // int* pA = nullptr;
    // pA++;
    for (auto iter = vMsg.begin(); iter != vMsg.end(); iter++)  // std::vector<std::string>::iterator 를 대신해서 auto
    {
        std::cout << (*iter) << std::endl;
    }
    // for auto range
    for (const auto& msg : vMsg)
    {
        std::cout << msg << std::endl;
    }
}