#ifndef BASE_TYPE_H
#define BASE_TYPE_H

#include <string>

// Abstract Class
class Base_Type
{
protected:
    std::string __type  {};
    std::string __value {};
public:
    virtual std::string __get_type() const = 0;
    virtual std::string __get_value() const = 0;
public:
    virtual ~Base_Type() {};
};

#endif // BASE_TYPE_H