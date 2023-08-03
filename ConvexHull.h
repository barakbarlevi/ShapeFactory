#pragma once
#include <vector>

#define pdd std::pair<double, double>

class ConvexHull
{
public:
	virtual float CalcConvexHullArea(std::vector<pdd> Vertices_) = 0;
private:
	int NumberOfVertices_;
};
