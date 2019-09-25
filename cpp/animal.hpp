#include <string>

class Animal {
    public:
        virtual std::string noise() = 0;
        std::string poo();
};