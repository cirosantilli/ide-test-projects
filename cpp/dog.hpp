#include <string>

#include "animal.hpp"

class Dog : public Animal {
    public:
        std::string noise();
};