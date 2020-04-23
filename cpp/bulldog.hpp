#ifndef BULLDOG_HPP
#define BULLDOG_HPP

#include <string>

#include "dog.hpp"

class BullDog : public Dog {
    public:
        std::string noise();
};

#endif
