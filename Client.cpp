#include "Client.h"

Client::Client() { pConvexHull = nullptr; }

void Client::BuildShape(ShapeType shapeType)
{
    ShapeFactory* sf = new ShapeFactory();
    sf->GenerateVertices(shapeType);
    pConvexHull = sf->DetermineShape(shapeType);
    float area;
    area = pConvexHull->CalcConvexHullArea(sf->Vertices_);
    delete sf;
}

ConvexHull* Client::getShape() { return pConvexHull; }

Client::~Client()
{
    if (pConvexHull) {
        delete pConvexHull;
        pConvexHull = NULL;
    }
}