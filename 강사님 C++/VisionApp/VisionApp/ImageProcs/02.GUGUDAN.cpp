#include <iostream>
#include <string>
#include <vector>

#include "GUGUDAN.h"

int main()
{
    // quiz
    // if...for...
    // GUGUDAN
    // input : dan_start, end(2~9) 
    // input : step_start, end(1~9)

    // dan : 2~9, step : 1~9
    // 2*1 = 2      3*1=3   ... 9*1=9
    // 2*2 = 4      3*2=6   ... 9*2=18
    // ...
    // 2*9 = 18      3*9=27   ... 9*9=81

    // dan : 2~9, step : 9~9 
    // 2*9 = 18      3*9=27   ... 9*9=81
    // 
    // #1. function of GUGUDAN
    /*
    std::cout << "GUGUDAN" << "\n";
    while (1) {
        int dan_start, dan_end, step_start, step_end;

        std::cout << "dan_start/end : ";
        std::cin >> dan_start >> dan_end;
        std::cout << "step_start/end : ";
        std::cin >> step_start >> step_end;

        if (dan_start != 1)
        {
            std::cout << "dan : " << dan_start << "~" << dan_end << ", " << "step : " << step_start << "~" << step_end << std::endl;
            for (int x = step_start; x <= step_end; x++)
            {
                for (int y = dan_start; y <= dan_end; y++)
                {
                    std::cout << y << "*" << x << "=" << y * x << "\t";
                }
                std::cout << "\n";
            }
            std::cout << "\n";
        }

        if (dan_start == 1)
        {
            return 0;
        }
    }
    */
    // #2. class of GUGUDAN
    // set(dan/step start/end), proc(알고리즘), display(출력)
    
    GUGUDAN ggd;
    int dan_start, dan_end, step_start, step_end;
    ggd.SetPara(dan_start = 2, dan_end = 9, step_start = 1, step_end = 9);
    ggd.Proc();
    ggd.Display();

    ggd.SetPara(dan_start = 5, dan_end = 6, step_start = 3, step_end = 7);
    ggd.Proc();
    ggd.Display();

    ggd.SetPara(dan_start = 2, dan_end = 6, step_start = 5, step_end = 9);
    ggd.Proc();
    ggd.Display();

    return 1;
}