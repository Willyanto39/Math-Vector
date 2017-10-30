#ifndef MATH_H_INCLUDED
#define MATH_H_INCLUDED
#include <math.h>
#endif // MATH_H_INCLUDED

#ifndef MATHVECTOR_H_INCLUDED
#define MATHVECTOR_H_INCLUDED

class MathVector
{
public:
    MathVector();
    virtual MathVector operator + (MathVector &v1){};
    virtual float length(){};
    virtual float length(MathVector &v1){};
    virtual MathVector operator - (MathVector &v1){};
    virtual float dotMultiplied(MathVector &v1){};
    ~MathVector();
};

#endif // MATHVECTOR_H_INCLUDED
