#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class Animal {
    public:
        virtual std::string noise() = 0;
        std::string poo();
};

#endif
