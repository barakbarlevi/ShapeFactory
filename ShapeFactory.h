#pragma once
#include "ConvexHull.h"
#include "enums.h"

class ShapeFactory
{
public:
	void GenerateVertices(ShapeType shapeType);
	ConvexHull* DetermineShape(ShapeType shapeType);
	std::vector<pdd> Vertices_;

protected:
	ConvexHull* CH_;
	int type_;

private:
};
