#ifndef FUNDAMENTAL_TYPE_H
#define FUNDAMENTAL_TYPE_H

#include "../Base_Type.h"

// Abstract class
class Fundamental_Type : public Base_Type
{
public:
    virtual std::string operator +  (const Base_Type*) const = 0;
    virtual std::string operator -  (const Base_Type*) const = 0;
    virtual std::string operator && (const Base_Type*) const = 0;
    virtual std::string operator || (const Base_Type*) const = 0;
    virtual std::string operator =  (const Base_Type*)       = 0;
public:
    virtual ~Fundamental_Type() {};

    // for class Number and class String

    // virtual std::string operator += (const Base_Type*) = 0;

    // for class Number

    // virtual std::string operator << (const Base_Type*) = 0;
    // virtual std::string operator >> (const Base_Type*) = 0;
    // virtual std::string operator <<= (const Base_Type*) = 0;
    // virtual std::string operator >>= (const Base_Type*) = 0;

    // virtual std::string operator ^= (const Base_Type*) = 0;
    // virtual std::string operator &= (const Base_Type*) = 0;
    // virtual std::string operator |= (const Base_Type*) = 0;

    // virtual std::string operator /= (const Base_Type*) = 0;
    // virtual std::string operator *= (const Base_Type*) = 0;
    // virtual std::string operator %= (const Base_Type*) = 0;
    // virtual std::string operator -= (const Base_Type*) = 0;

    // virtual std::string operator*(const Base_Type*) = 0;
    // virtual std::string operator/(const Base_Type*) = 0;
    // virtual std::string operator%(const Base_Type*) = 0;

    // virtual std::string operator++() = 0;       // ++value
    // virtual std::string operator--() = 0;       // --value
    // virtual std::string operator++(int) = 0;    // value++
    // virtual std::string operator--(int) = 0;    // value--

};

#endif // FUNDAMENTAL_TYPE_H