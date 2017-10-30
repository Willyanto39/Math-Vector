#ifndef MATHVECTOR_H_INCLUDED
#include "mathvector.h"
#endif // MATHVECTOR_H_INCLUDED

#ifndef VECTOR2D_H_INCLUDED
#define VECTOR2D_H_INCLUDED

class Vector2D : public MathVector
{
private:
    float x;
    float y;

public:
    Vector2D();
    Vector2D(float newX, float newY);
    float length();
    float length(Vector2D &v1);
    Vector2D operator + (Vector2D &v1);
    Vector2D operator - (Vector2D &v1);
    Vector2D scalarMultiplied(int scalar);
    float dotMultiplied(Vector2D &v1);
    void setX(float newX);
    void setY(float newY);
    float getX();
    float getY();
    ~Vector2D();
};

#endif // VECTOR2D_H_INCLUDED
