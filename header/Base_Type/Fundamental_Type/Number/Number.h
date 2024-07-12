#ifndef NUMBER_H
#define NUMBER_H

#include "../Fundamental_Type.h"

class Number : public Fundamental_Type
{
public:
    std::string __get_type  ()  const override;
    std::string __get_value ()  const override;
public:
    Base_Type* operator +   (const Base_Type*) const override;
    Base_Type* operator -   (const Base_Type*) const override;
    Base_Type* operator &&  (const Base_Type*) const override;
    Base_Type* operator ||  (const Base_Type*) const override;
    Base_Type* operator =   (const Base_Type*)       override;

    std::string operator +=  (const Base_Type*);
    std::string operator /=  (const Base_Type*);
    std::string operator *=  (const Base_Type*);
    std::string operator %=  (const Base_Type*);
    std::string operator -=  (const Base_Type*);

    std::string operator ^=  (const Base_Type*);
    std::string operator &=  (const Base_Type*);
    std::string operator |=  (const Base_Type*);

    std::string operator <<  (const Base_Type*);
    std::string operator >>  (const Base_Type*);
    std::string operator <<= (const Base_Type*);
    std::string operator >>= (const Base_Type*);

    std::string operator *   (const Base_Type*);
    std::string operator /   (const Base_Type*);
    std::string operator %   (const Base_Type*);

    std::string operator ++ (int);    // value++
    std::string operator -- (int);    // value--
    std::string operator ++    ();    // ++value
    std::string operator --    ();    // --value
public:
    Number (const std::string&);
    // Number (const Base_Type*);        // ???????
};

#endif // NUMBER_H