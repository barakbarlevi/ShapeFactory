#include <iostream>
#include "enums.h"
#include "ShapeFactory.h"
#include "ConvexHull.h"
#include "Triangle.h"
#include "Trapezoid.h"
#include "Client.h"

int main()
{
	Client* pClient = new Client();  // All the client has to do is specify a shape, listed in enum ShapeType

	for (int shapesIndex = ST_Triangle; shapesIndex != Last_in_enum; shapesIndex++) // Iterating over all possible shapes
	{
		ShapeType Shape = static_cast<ShapeType>(shapesIndex);
		pClient->BuildShape(Shape);  // Once the client builds the shape, all class instantiations are hidden from him
	}
	
	delete pClient;  // Deallocate memory
	return 0;
}