#include "../../../../header/Base_Type/Fundamental_Type/Undef/Undef.h"

using pair_type_value = std::pair<std::string, std::string>;

// Constructors
Undef::Undef (const pair_type_value& __inp_value)
{
    this->__type  = __inp_value.first;
    this->__value = __inp_value.second;
}

Undef::Undef (const Base_Type& __other)
{
    this->__type  = __other.__get_type();
    this->__value = __other.__get_value();
}

// Logic 
pair_type_value 
Undef::operator && (const Base_Type& __rhv) const
{

}

pair_type_value 
Undef::operator || (const Base_Type& __rhv) const
{

}

pair_type_value 
Undef::operator == (const Base_Type& __rhv) const
{

}

pair_type_value 
Undef::operator != (const Base_Type& __rhv) const
{

}

pair_type_value 
Undef::operator < (const Base_Type& __rhv) const
{

}

pair_type_value 
Undef::operator > (const Base_Type& __rhv) const
{

}

pair_type_value 
Undef::operator <= (const Base_Type& __rhv) const
{

}

pair_type_value 
Undef::operator >= (const Base_Type& __rhv) const
{

}


// Ariphmetic
pair_type_value 
Undef::operator + (const Base_Type& __rhv) const
{

}

pair_type_value 
Undef::operator - (const Base_Type& __rhv) const
{

} 

pair_type_value 
Undef::operator * (const Base_Type& __rhv) const
{

}

pair_type_value 
Undef::operator / (const Base_Type& __rhv) const
{

}

pair_type_value 
Undef::operator % (const Base_Type& __rhv) const
{

}

pair_type_value 
Undef::operator << (const Base_Type& __rhv) const
{

}

pair_type_value 
Undef::operator >> (const Base_Type& __rhv) const
{

}

pair_type_value 
Undef::operator | (const Base_Type& __rhv) const
{

}

pair_type_value 
Undef::operator & (const Base_Type& __rhv) const
{

}

pair_type_value 
Undef::operator ^ (const Base_Type& __rhv) const
{

}


// Assignments
pair_type_value 
Undef::operator = (const Base_Type& __rhv) 
{

}


// Ariphmetic postfix and prefix inc/dec
pair_type_value 
Undef::operator ++ (int)    // value++
{

}

pair_type_value 
Undef::operator -- (int)    // value--
{

}

pair_type_value 
Undef::operator ++ ()       // ++value
{

}

pair_type_value 
Undef::operator -- ()       // --value
{

}