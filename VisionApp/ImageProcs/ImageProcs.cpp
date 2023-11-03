// 다형성에 관한 내용
#include <iostream>
using namespace std;
class IShape    //named
{
public:
    IShape() { cout << "IShape::Ctor" << endl; }
    ~IShape() { cout << "IShape::Dtor" << endl; }
    virtual void DisplayShapeInfo() = 0;
    void SetShape(int& shapeinfo) { _ShapeInfo = shapeinfo; }
 //   int SetShape(int shapeinfo) { _ShapeInfo = shapeinfo; }
    int GetShape() { return _ShapeInfo; }
private:
    int _ShapeInfo = 0;  // 0 - circle, 1 - rect, 2 - triangle
};

class ShapeRect : public IShape
{
public:
    ShapeRect() { cout << "ShapeRect::Ctor" << endl; }
    ~ShapeRect() { cout << "ShapeRect::Dtor" << endl; }
    void DisplayShapeInfo() override { cout << "This is Rectangle" << endl; }
};
int main()
{
    {
        ShapeRect sRect;
        IShape* shape = nullptr;    // object - pointer = nullptr
        // sRect ... static_type
        // &sRect .. static_type_address
        // A <--- B : casting
        // dynamic_cast<IShape*>
        shape = dynamic_cast<IShape*>(&sRect);
        int shapeInfo = 100;
        // shape -> SetShape(shapeInfo);
        shape->SetShape(shapeInfo);
        // 매개변수(int shapeinfo)
        // 10 -> ??
        // compiler ... 10?? 상수(constant).. int ..int tmp(10);
        // (int shapeinfo (= int tmp(10)) ) // 임시객체
        // setshape(100)
        shapeInfo = shape->GetShape();
        shape->DisplayShapeInfo();
    }

    return 1;
}