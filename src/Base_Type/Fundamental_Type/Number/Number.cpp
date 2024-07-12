#include "../../../../header/Base_Type/Fundamental_Type/Number/Number.h"

Number::Number (const std::string& __inp_value)
{
    this->__value = __inp_value;
    this->__type  = "Number";
}

// Number::Number (const Base_Type* __other)
// {

// }

Base_Type* Number::operator+(const Base_Type* __rhv) const 
{
    std::string __rhv_type = std::move(__rhv->__get_type());
    if (
        (__rhv_type != "Number")  &&
        (__rhv_type != "String")  &&
        (__rhv_type != "Boolean") &&
        (__rhv_type != "Array")
       )
    {
        return new Number ("NaN");
    }

    if (__rhv_type == "Number")
    {
        if ((this->__value == "NaN") ||
            (__rhv->__get_value() == "NaN")
           )
        {
            return new Number ("NaN");
        }

        return new Number (
            std::to_string(std::stod(this->__value) + std::stod(__rhv->__get_value()))
        );
    }

    if (__rhv_type == "Boolean")
    {
        if (this->__value == "NaN")
        {
            return new Number ("NaN");
        }

        if (__rhv->__get_value() == "true")
        {
            return new Number (
                std::to_string(std::stod(this->__value) + 1)
            );
        }

        return new Number (this->__value);
    }

    /*
    if (__rhv_type == "String")
    {
        return new String (...);
    }
    */

    /*
        __rhv_type == "Array"
        return new Array (...);
    */
}

Base_Type* Number::operator-(const Base_Type* __rhv) const
{
    std::string __rhv_type = std::move(__rhv->__get_type());
    if (
        (__rhv_type != "Number")  &&
        (__rhv_type != "Boolean")
       )
    {
        return new Number ("NaN");
    }

    if (__rhv_type == "Number")
    {
        if ((this->__value == "NaN") ||
            (__rhv->__get_value() == "NaN")
           )
        {
            return new Number ("NaN");
        }

        return new Number (
            std::to_string(std::stod(this->__value) - std::stod(__rhv->__get_value()))
        );
    }

    if (this->__value == "NaN")
    {
        return new Number ("NaN");
    }

    if (__rhv->__get_value() == "true")
    {
        return new Number (
            std::to_string(std::stod(this->__value) - 1)
        );
    }

    return new Number (this->__value);
}

Base_Type* Number::operator&&(const Base_Type* __rhv) const
{
    std::string __rhv_value = std::move(__rhv->__get_value());

    if (
        (this->__value == "NaN") ||
        (0 == std::stod(this->__value))
       )
    {
        // return new Boolean("false");
    }

    if (
        (__rhv_value == "NaN")   ||
        (__rhv_value == "Null")  ||
        (__rhv_value == "Undef") ||
        (__rhv_value == "false") ||
        ((__rhv->__get_type() == "Number") && (0 == std::stod(__rhv_value)))
       )
    {
        // return new Boolean("false"); 
    }

    // return new Boolean("true");
}

Base_Type* Number::operator||(const Base_Type* __rhv) const
{

}

Base_Type* Number::operator=(const Base_Type* __rhv)
{
    if (this != __rhv)
    {

    }
    
    return this;
}

std::string Number::operator+=(const Base_Type* __rhv)
{

}

std::string Number::operator/=(const Base_Type* __rhv)
{

}

std::string Number::operator*=(const Base_Type* __rhv)
{

}

std::string Number::operator%=(const Base_Type* __rhv)
{

}

std::string Number::operator-=(const Base_Type* __rhv)
{

}

std::string Number::operator^=(const Base_Type* __rhv)
{

}
std::string Number::operator&=(const Base_Type* __rhv)
{

}
std::string Number::operator|=(const Base_Type* __rhv)
{

}

std::string Number::operator<<(const Base_Type* __rhv)
{

}
std::string Number::operator>>(const Base_Type* __rhv)
{

}
std::string Number::operator<<=(const Base_Type* __rhv)
{

}
std::string Number::operator>>=(const Base_Type* __rhv)
{

}

std::string Number::operator*(const Base_Type* __rhv)
{

}
std::string Number::operator/(const Base_Type* __rhv)
{

}
std::string Number::operator%(const Base_Type* __rhv)
{

}

std::string Number::operator++(int)    // value++
{

}

std::string Number::operator--(int)    // value--
{

}

std::string Number::operator++()        // ++value
{

}

std::string Number::operator--()        // --value
{

}