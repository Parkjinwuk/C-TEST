#include <iostream>
#include <vector>

class Shape { 
public:
    Shape()
        :a(0)  // member initialized
        ,b(10)
    { 
        // copy operator
        a = 0;  
        b = 10;
        std::cout << "Ctor" << std::endl; 
    }
    ~Shape();
    
private:
    int a = 10;
    int b = 0;
    int* pA;
};

#define CIRCLE 100  // 조사식에 보이지 않음
#define RECTANGLE 101
const size_t _Circle = 100;  // 조사식에 보임

enum EShape {  // array에서 활용 좋음
    eCircle = 0,
    eRectangle,  
    eTriangle,
    ePoly,
    eShapeMax  // 4
};

int main()
{
    
    int a = 1;
    // int ctor(memory) -> instance -> |a| -> operator '=' -> 1
    // operator를 만나기 전에 쓰레기 값이 저장될 수 있다.
    int b(20);
    // int ctor(memory) -> instance + 2 (initialized)
    char byChar = 'A';
    int c = a + b;
    std::cout << c << "\t=\t" << a << "\t+\t" << b << std::endl;

    int* pA = nullptr;
    std::cout << "size of pointer pA =" << sizeof(pA) << std::endl;

    EShape _eShape = EShape::eCircle;

    // resource create
    int* pShape = nullptr;
    for (size_t i = 0; i < 100; i++)
    {
        int* pShape = new int[EShape::eShapeMax];  // smart ptr
        // init and management
        memset((void*)pShape, 0, sizeof(int) * EShape::eShapeMax);

        // destroy
        if (pShape != nullptr)
        {
            delete[] pShape;
            pShape = nullptr;
        }
    }

    std::vector<int> vShape(EShape::eShapeMax, 0);
    vShape[0] = 1;
    vShape[1] = 2;
    vShape[2] = 3;
    vShape[3] = 4;
    
    return 1;
}