#include "ShapeFactory.h"
#include "Triangle.h"
#include "Trapezoid.h"
#include "Client.h"
#include <iostream>

void ShapeFactory::GenerateVertices(ShapeType shapeType)
{
	pdd A = std::make_pair(1, 1);
	pdd B = std::make_pair(4, 1);
	pdd C = std::make_pair(1, 8);
	pdd D = std::make_pair(2, 8);
	if (shapeType == ST_Triangle) Vertices_ = { A, B, C };
	if (shapeType == ST_Trapezoid) Vertices_ = { A, B, C, D };
}

ConvexHull* ShapeFactory::DetermineShape(ShapeType shapeType)
{
	if (shapeType == ST_Triangle)
		return new Triangle();
	else if (shapeType == ST_Trapezoid)
		return new Trapezoid();
	else
		return nullptr;
}