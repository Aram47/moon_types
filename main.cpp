#include <iostream>
#include <functional>
#include <string>
#include "./header/Types.h"

using pair_type_value = std::pair<std::string, std::string>;

int main () 
{
    std::vector<Base_Type*> __vec;

    __vec.push_back(new Number ({"Number", "5"}));
    __vec.push_back(new Number ({"Number", "9"}));
    __vec.push_back(new Boolean({"Boolean", "false"}));
    __vec.push_back(new String ({"String", "Hello World!"}));
    __vec.push_back(new Number ({"Number", "-95"}));
    __vec.push_back(new Number ({"Number", "NaN"}));
    __vec.push_back(new Boolean({"Boolean", "true"}));
    __vec.push_back(new Null   ({"Null", "Null"}));
    __vec.push_back(new Undef  ({"Undef", "Undef"}));
    __vec.push_back(new String ({"String", "Goodbye World!"}));

    pair_type_value __res;

    for (int i = 0; i < __vec.size() - 1; ++i)
    {
        __res = (*__vec[i]) + (*__vec[i + 1]);
        std::cout << "\033[1;31m"
                  << "type"
                  << "\033[1m\033[33m"
                  << "("
                  << "\033[30m" 
                  << __res.first 
                  << "\033[0m"
                  << "\033[1m\033[33m"
                  << ")   " 
                  << "\033[1;31m"
                  << "value"
                  << "\033[1m\033[33m"
                  << "("
                  << "\033[30m" 
                  << __res.second
                  << "\033[1m\033[33m"
                  << ")"
                  << "\033[0m"
                  << std::endl;
    }

    for (int i = 0; i < __vec.size(); ++i)
    {
        delete __vec[i];
        __vec[i] = nullptr;
    }

    return 0; 
}