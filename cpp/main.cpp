#include <cassert>
#include <iostream>
#include <unordered_set>

#include "car.hpp"
#include "cat.hpp"
#include "dog.hpp"
#include "include_in_custom_path.hpp"

int main(int argc, char **argv) {
    // Deterministic inheritance reference.
    Animal *animal = new Dog();
    std::cout << animal->noise() << std::endl;
    std::cout << animal->poo() << std::endl;

    // Unrelated method with the same name.
    Car *car = new Car();
    std::cout << car->noise() << std::endl;

    // Unresolved virtual reference.
    {
        Animal *animal;
        if (argc == 1) {
            animal = new Cat();
        } else {
            animal = new Dog();
        }
        std::cout << animal->noise() << std::endl;
    }

    // C++11 library.
    {
    	std::unordered_set<int> s{1, 2, 3};
    	assert(s.find(1) != s.end());
    }

    // Custom include paths.
    {
        assert(INCLUDE_IN_CUSTOM_PATH == 1);
    }
}
