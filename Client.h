#pragma once
#include "ShapeFactory.h"
#include "ConvexHull.h"
#include "enums.h"

class Client {
public:
    Client();
    void BuildShape(ShapeType shapeType);
    ConvexHull* getShape();
    ~Client();

private:
    ConvexHull* pConvexHull;
};