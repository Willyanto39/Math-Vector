#include "include/vector2d.h"

Vector2D::Vector2D()
{
    x = y = 0;
}

Vector2D::Vector2D(float newX, float newY)
{
    x = newX;
    y = newY;
}

Vector2D Vector2D::operator + (Vector2D &v1)
{
    float resultX, resultY;

    resultX = this->x + v1.x;
    resultY = this->y + v1.y;

    Vector2D result(resultX,resultY);
    return result;
}

Vector2D Vector2D::operator - (Vector2D &v1)
{
    float resultX, resultY;

    resultX = this->x - v1.x;
    resultY = this->y - v1.y;

    Vector2D result(resultX,resultY);
    return result;
}

float Vector2D::length()
{
    float xSquared, ySquared;

    xSquared = pow(x,2);
    ySquared = pow(y,2);

    return sqrt(xSquared + ySquared);
}

float Vector2D::length(Vector2D &v1)
{
    float diffX, diffY, diffXSquared, diffYSquared;

    diffX = this->x - v1.x;
    diffY = this->y - v1.y;

    diffXSquared = pow(diffX,2);
    diffYSquared = pow(diffY,2);

    return sqrt(diffXSquared + diffYSquared);
}

Vector2D Vector2D::scalarMultiplied(int scalar)
{
    Vector2D result(scalar * x, scalar * y);
    return result;
}

float Vector2D::dotMultiplied(Vector2D &v1)
{
    float result = this->x * v1.x + this->y * v1.y;

    return result;
}

void Vector2D::setX(float newX)
{
    x = newX;
}

void Vector2D::setY(float newY)
{
    y = newY;
}

float Vector2D::getX()
{
    return x;
}

float Vector2D::getY()
{
    return y;
}

Vector2D::~Vector2D()
{

}

