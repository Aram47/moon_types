#ifndef FUNDAMENTAL_TYPE_H
#define FUNDAMENTAL_TYPE_H

#include "../Base_Type.h"

// Abstract class
class Fundamental_Type : public Base_Type
{
public:
    virtual Base_Type* operator +  (const Base_Type*) const = 0;
    virtual Base_Type* operator -  (const Base_Type*) const = 0;
    virtual Base_Type* operator && (const Base_Type*) const = 0;
    virtual Base_Type* operator || (const Base_Type*) const = 0;
    virtual Base_Type* operator =  (const Base_Type*)       = 0;

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
    
public:
    virtual ~Fundamental_Type() {};
};

#endif // FUNDAMENTAL_TYPE_H