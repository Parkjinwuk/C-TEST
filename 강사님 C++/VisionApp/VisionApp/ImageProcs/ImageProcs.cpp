#include <iostream>

class IShape {  // named
public:
    IShape() { std::cout << "IShape::Ctor" << std::endl; }
    ~IShape() { std::cout << "IShape::Dtor" << std::endl; }
    virtual void DisplayShapeInfo() = 0;
    //int SetShape(int& shapeinfo) { _ShapeInfo = shapeinfo; }
    void SetShape(int shapeinfo) { _ShapeInfo = shapeinfo; }
    int GetShape() { return _ShapeInfo; }
private:
    int _ShapeInfo = 0; // 0 - circle, 1 - rectangle, 2 - triangle
};

class ShapeRect : public IShape {
public:
    ShapeRect() { std::cout << "ShapeRect::Ctor" << std::endl; }
    ~ShapeRect() { std::cout << "ShapeRect::Dtor" << std::endl; }
    void DisplayShapeInfo() override { std::cout << "This is Rectangle" << std::endl; }
};

int main()
{
    {
        ShapeRect sRect;  // instance
        IShape* shape = nullptr;  // object pointer = nullptr
        // sRect ... static type
        // &sRect .. static type address
        //   A   <--- B : casting
        // dynamic_cast<IShape*>
        shape = dynamic_cast<IShape*>(&sRect);
        int shapeInfo = 100;
        //shape->SetShape(shapeInfo);
        shape->SetShape(10);
        // 매개변수(int shapeinfo)
        // 10 -> ??
        // compiler... 10?? 상수(constant) .. int.. int temp(10);
        // (int shapeinfo ( = int temp(10) ) )  // 임시 객체
        // setshape(100)
        shapeInfo = shape->GetShape();
        shape->DisplayShapeInfo();
    }

    return 1;
}

