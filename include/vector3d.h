#ifndef MATHVECTOR_H_INCLUDED
#include "mathvector.h"
#endif // MATHVECTOR_H_INCLUDED

#ifndef VECTOR3D_H_INCLUDED
#define VECTOR3D_H_INCLUDED

class Vector3D
{
private:
    float x;
    float y;
    float z;

public:
    Vector3D();
    Vector3D(float newX, float newY, float newZ);
    float length();
    float length(Vector3D &v1);
    Vector3D operator + (Vector3D &v1);
    Vector3D operator - (Vector3D &v1);
    float dotMultiplied(Vector3D &v1);
    Vector3D scalarMultiplied(int scalar);
    Vector3D crossMultiplied(Vector3D &v1);
    void setX(float newX);
    void setY(float newY);
    void setZ(float newZ);
    float getX();
    float getY();
    float getZ();
    ~Vector3D();
};

#endif // VECTOR3D_H_INCLUDED
