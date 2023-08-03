#include "Triangle.h"

float Triangle::CalcConvexHullArea(std::vector<pdd> Vertices_)
{
	float S = 0;
	pdd A_ = Vertices_[0];
	pdd B_ = Vertices_[1];
	pdd C_ = Vertices_[2];
	S = 0.5 * (A_.first * (B_.second - C_.second) + B_.first * (C_.second - A_.second) + C_.first * (A_.second - B_.second));
	if (S < 0) S = -S;
	printf("Area of Triangle is: %f\n", S);
	return S;
}