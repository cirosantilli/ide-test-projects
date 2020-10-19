#include <cassert>
#include <iostream>
#include <unordered_set>

#include "animal.hpp"
#include "animal_template.hpp"
#include "car.hpp"
#include "cat.hpp"
#include "dog.hpp"
#include "bulldog.hpp"
#include "include_in_custom_path.hpp"

int main(int argc, char **argv) {
    // Deterministic inheritance reference.
    {
        Dog dog;
        Animal *animal = &dog;
        assert(animal->noise() == "woof");
        assert(animal->poo()   == "ewww");
    }

    // Unrelated method with the same name.
    {
        Car thecar;
        Car *car = &thecar;
        assert(car->noise() == "vrooom");
    }

    std::cout << "Unresolved virtual reference" << std::endl;
    {
        Animal *animal;
        if (argc == 1) {
            animal = new Cat();
        } else {
            animal = new Dog();
        }
        std::cout << animal->noise() << std::endl;
    }
    std::cout << std::endl;

    // List used templae possibilities
    {
        Dog dog;
        assert(template_animal_noise(dog) == "woof");
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
