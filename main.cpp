#include <iostream>
#include "include/mathvector.h"
#include "include/vector2d.h"
#include "include/vector3d.h"

int main()
{
    Vector2D a(3,4);
    Vector2D b(7,6);
    Vector2D c = a + b;
    Vector2D d = a - b;

    Vector3D r(3,4,5);
    Vector3D s(5,12,13);
    Vector3D t = r + s;
    Vector3D u = r - s;

    //Result 10 10
    std::cout << c.getX() << " " << c.getY() << std::endl;

    //Result is square root of 200
    std::cout << c.length() << std::endl;

    //Result -4 -2
    std::cout << d.getX() << " " << d.getY() << std::endl;

    //Result square root of 20
    std::cout << d.length() << std::endl;

    //Result 8 16 18
    std::cout << t.getX() << " " << t.getY() << " " << t.getZ() << std::endl;

    //Result -2 -8 -8
    std::cout << u.getX() << " " << u.getY() << " " << u.getZ() << std::endl;



    return 0;
}
