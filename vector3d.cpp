#include "include/vector3d.h"

Vector3D::Vector3D()
{
    x = y = z = 0;
}

Vector3D::Vector3D(float newX, float newY, float newZ)
{
    x = newX;
    y = newY;
    z = newZ;
}

Vector3D Vector3D::operator + (Vector3D &v1)
{
    float resultX, resultY, resultZ;

    resultX = this->x + v1.x;
    resultY = this->y + v1.y;
    resultZ = this->z + v1.z;

    Vector3D result(resultX, resultY, resultZ);

    return result;
}

Vector3D Vector3D::operator - (Vector3D &v1)
{
    float resultX, resultY, resultZ;

    resultX = this->x - v1.x;
    resultY = this->y - v1.y;
    resultZ = this->z - v1.z;

    Vector3D result(resultX, resultY, resultZ);

    return result;
}

float Vector3D::length()
{
    float xSquared, ySquared, zSquared;

    xSquared = pow(x,2);
    ySquared = pow(y,2);
    zSquared = pow(z,2);

    return sqrt(xSquared + ySquared + zSquared);
}

float Vector3D::length(Vector3D &v1)
{
    float diffXSquared, diffYSquared, diffZSquared, diffX, diffY, diffZ;

    diffX = this->x - v1.x;
    diffY = this->y - v1.y;
    diffZ = this->z - v1.z;

    diffXSquared = pow(diffX,2);
    diffYSquared = pow(diffY,2);
    diffZSquared = pow(diffZ,2);

    return sqrt(diffXSquared + diffYSquared + diffZSquared);
}

Vector3D Vector3D::scalarMultiplied(int scalar)
{
    Vector3D result(scalar * x, scalar * y, scalar * z);
    return result;
}

float Vector3D::dotMultiplied(Vector3D &v1)
{
    float result = this->x * v1.x + this->y * v1.y + this->z * v1.z;

    return result;
}

Vector3D Vector3D::crossMultiplied(Vector3D &v1)
{
    float resultX, resultY, resultZ;

    resultX = this->y * v1.z - this->z * v1.y;
    resultY = -(this->x * v1.z - this->z * v1.x);
    resultZ = this->x * v1.y - this->y * v1.x;

    Vector3D result(resultX, resultY, resultZ);

    return result;
}

void Vector3D::setX(float newX)
{
    x = newX;
}

void Vector3D::setY(float newY)
{
    y = newY;
}

void Vector3D::setZ(float newZ)
{
    z = newZ;
}

float Vector3D::getX()
{
    return x;
}

float Vector3D::getY()
{
    return y;
}

float Vector3D::getZ()
{
    return z;
}

Vector3D::~Vector3D()
{

}
