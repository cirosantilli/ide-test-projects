#ifndef CAT_HPP
#define CAT_HPP

#include <string>

#include "animal.hpp"

class Cat : public Animal {
    public:
        std::string noise();
};

#endif
