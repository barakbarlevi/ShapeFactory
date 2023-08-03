#include "Trapezoid.h"

float Trapezoid::CalcConvexHullArea(std::vector<pdd> Vertices_)
{
	float S = 0;
	pdd A_ = Vertices_[0];
	pdd B_ = Vertices_[1];
	pdd C_ = Vertices_[2];
	pdd D_ = Vertices_[3];
	// Assuming AB and CD are the bases
	S = 0.5 * (A_.second - C_.second) * (B_.first - A_.first + D_.first - C_.first);
	if (S < 0) S = -S;
	printf("Area of Trapezoid is: %f\n", S);
	return S;
}
